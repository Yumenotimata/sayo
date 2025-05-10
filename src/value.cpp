#include <value.hpp>

#include <iostream>

std::unique_ptr<value_t> mk_int(int value) {
    return std::make_unique<value_t>(int_v{value});
}

std::unique_ptr<value_t> mk_string(std::string value) {
    return std::make_unique<value_t>(string_v{value});
}

bool operator==(const value_t& l, const value_t& r) {
    return std::visit([](auto&& arg1, auto&& arg2) {
        using T = std::decay_t<decltype(arg1)>;
        if constexpr (std::is_same_v<T, std::decay_t<decltype(arg2)>>) {
            if constexpr (std::is_same_v<T, int_v>) {
                return arg1.value == arg2.value;
            } else if constexpr (std::is_same_v<T, string_v>) {
                return arg1.value == arg2.value;
            }
        } else {
            return false;
        }
    }, l.inner, r.inner);
}