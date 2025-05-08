#pragma once

#include <string>
#include <variant>
#include <memory>

struct int_v {
    int value;
};

struct string_v {
    std::string value;
};

using value_inner_t = std::variant<int_v, string_v>;

struct value_t {
    value_inner_t inner;

    value_t(value_inner_t inner) : inner(std::move(inner)) {}
};

std::unique_ptr<value_t> mk_int(int value);
std::unique_ptr<value_t> mk_string(std::string value);