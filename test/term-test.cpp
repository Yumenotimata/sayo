#include <gtest/gtest.h>

#include <term.hpp>
#include <value.hpp>

#include <memory>

TEST(UniquifyTest, ScopeHierarchy) {
    auto e1 = let("x", lambda("x", var("x")), app(var("x"), lit(mk_string("Hello"))));

    auto u1 = uniquify(std::move(e1));
    auto u2 = let("x0", lambda("x1", var("x1")), app(var("x0"), lit(mk_string("Hello"))));

    EXPECT_EQ(*u1, *u2);
}