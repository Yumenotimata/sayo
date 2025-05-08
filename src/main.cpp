#include <iostream>

#include <term.hpp>

int main(int argc, char** argv) {
    auto e1 = let("x", va)
    auto u1 = uniqify(std::move(e1));
    std::cout << u1->to_string() << std::endl;
    return 0;
}