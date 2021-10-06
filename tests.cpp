// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[example]")
{
    REQUIRE(areOdd(2021, 0) == 1);
    REQUIRE(areOdd(2020, -3) == 1);
    REQUIRE(areOdd(20, 2) == 0);
    REQUIRE(areOdd(-2021, -3) == 1);
    REQUIRE(areOdd(-5, 0) == 1);
    REQUIRE(areOdd(6, -8) == 0);
}

