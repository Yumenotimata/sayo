#pragma once

#include <string>
#include <variant>
#include <memory>

#include <value.hpp>

using std::string;
using std::unique_ptr;
using std::variant;
using std::move;
using std::make_unique;
using std::visit;
using std::decay_t;

struct expr_t;

struct app_t {
    std::unique_ptr<expr_t> e1, e2;
};

std::unique_ptr<expr_t> app(std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);

struct lambda_t {
    std::string e;
    std::unique_ptr<expr_t> body;
};

std::unique_ptr<expr_t> lambda(std::string e, std::unique_ptr<expr_t> body);

struct let_t {
    std::string id;
    std::unique_ptr<expr_t> e1, e2;

    let_t(std::string id, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2)
        : id(id), e1(std::move(e1)), e2(std::move(e2)) {}
};

std::unique_ptr<expr_t> let(std::string e, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);

struct var_t {
    std::string id;
};

struct lit_t {
    std::unique_ptr<value_t> value;
};

std::unique_ptr<expr_t> app(std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);
std::unique_ptr<expr_t> lambda(std::unique_ptr<expr_t> e, std::unique_ptr<expr_t> body);
std::unique_ptr<expr_t> let(std::string id, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);
std::unique_ptr<expr_t> var(std::string id);
std::unique_ptr<expr_t> lit(std::unique_ptr<value_t> value);

using expr_inner_t = std::variant<app_t, lambda_t, let_t, var_t, lit_t>;

struct expr_t {
    expr_inner_t inner;

    std::string to_string();

    expr_t(expr_inner_t inner) : inner(std::move(inner)) {}
};

std::unique_ptr<expr_t> uniquify(std::unique_ptr<expr_t> e);