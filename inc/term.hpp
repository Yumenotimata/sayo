#pragma once

#include <string>
#include <variant>
#include <memory>

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

std::unique_ptr<expr_t> let(char *id, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);

struct var_t {
    std::string id;
};

std::unique_ptr<expr_t> app(std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);
std::unique_ptr<expr_t> lambda(std::unique_ptr<expr_t> e, std::unique_ptr<expr_t> body);
std::unique_ptr<expr_t> let(std::string id, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2);
std::unique_ptr<expr_t> var(std::string id);

using expr_inner_t = std::variant<app_t, lambda_t, let_t, var_t>;

struct expr_t {
    expr_inner_t inner;

    std::string to_string();

    expr_t(expr_inner_t inner) : inner(std::move(inner)) {}
};

struct uexpr_t;

struct uapp_t {
    std::unique_ptr<uexpr_t> e1, e2;

    uapp_t(std::unique_ptr<uexpr_t> e1, std::unique_ptr<uexpr_t> e2)
        : e1(std::move(e1)), e2(std::move(e2)) {}
};

std::unique_ptr<uexpr_t> uapp(std::unique_ptr<uexpr_t> e1, std::unique_ptr<uexpr_t> e2);

struct ulambda_t {
    std::string e;
    std::unique_ptr<uexpr_t> body;

    ulambda_t(std::string e, std::unique_ptr<uexpr_t> body)
        : e(e), body(std::move(body)) {}
};

std::unique_ptr<uexpr_t> ulambda(std::string e, std::unique_ptr<uexpr_t> body);

struct ulet_t {
    std::string id;
    std::unique_ptr<uexpr_t> e1, e2;

    ulet_t(std::string id, std::unique_ptr<uexpr_t> e1, std::unique_ptr<uexpr_t> e2)
        : id(std::move(id)), e1(std::move(e1)), e2(std::move(e2)) {}
};

std::unique_ptr<uexpr_t> ulet(std::string id, std::unique_ptr<uexpr_t> e1, std::unique_ptr<uexpr_t> e2);

struct uvar_t {
    std::string id;
};

std::unique_ptr<uexpr_t> uvar(std::string id);

using uexpr_inner_t = std::variant<uapp_t, ulambda_t, ulet_t, uvar_t>;

struct uexpr_t {
    uexpr_inner_t inner;

    std::string to_string();

    uexpr_t(uexpr_inner_t inner) : inner(std::move(inner)) {}
};

std::unique_ptr<uexpr_t> uniqify(std::unique_ptr<expr_t> e);