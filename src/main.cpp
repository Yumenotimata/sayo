#include <iostream>

#include <term.hpp>

int main(int argc, char** argv) {
    auto e1 = let("x0", lambda("x0", var("x0")), app(var("x0"), lit(mk_string("Hello"))));
    try {
        auto u1 = uniquify(std::move(e1));
        std::cout << u1->to_string() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}