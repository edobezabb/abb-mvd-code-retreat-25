#include <gtest/gtest.h>
#include <fmt/format.h>

#include "game_of_life.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, AddingIntegers)
{
    ASSERT_EQ(add(1, 2), 3);
}

TEST(HelloTest, FormattingString)
{
    auto formatted_str = fmt::format("Hello {}", "world");
    EXPECT_EQ("Hello world", formatted_str);
}