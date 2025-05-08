#include <value.hpp>

std::unique_ptr<value_t> mk_int(int value) {
    return std::make_unique<value_t>(int_v{value});
}

std::unique_ptr<value_t> mk_string(std::string value) {
    return std::make_unique<value_t>(string_v{value});
}