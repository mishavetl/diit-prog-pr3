#include <sstream>

#include "sequence.h"
#include "catch.hpp"

using namespace lr3;

TEST_CASE("Sequence members are calculated correctly", "[sequence]") {
    SECTION("constructs first 5 members") {
        REQUIRE(sequence::member(4, 1.5, 0, 0) == Double(0.441176470588));
        REQUIRE(sequence::member(5, sequence::member(4, 1.5, 0, 0), 1.5, 0) == Double(0.101809954751));
    }

    SECTION("constructs first 5 members") {
        std::stringstream output;

        REQUIRE(sequence::calculate(output, 5) == Double(0.101809954751));
        REQUIRE(output.str() == "0 0 1.5 0.441176 0.10181 ");
    }

    SECTION("constructs the first member") {
        std::stringstream output;

        REQUIRE(sequence::calculate(output, 1) == Double(0));
        REQUIRE(output.str() == "0 ");
    }

    SECTION("constructs the second member") {
        std::stringstream output;

        REQUIRE(sequence::calculate(output, 2) == Double(0));
        REQUIRE(output.str() == "0 0 ");
    }

    SECTION("constructs the second member") {
        std::stringstream output;

        REQUIRE(sequence::calculate(output, 3) == Double(1.5));
        REQUIRE(output.str() == "0 0 1.5 ");
    }

}