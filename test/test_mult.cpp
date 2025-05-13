#include <gtest/gtest.h>
#include "mult.h"

TEST(MultiplicarTest, HandlesPositiveInput)
{
    double result = multiplicar(4, 6);
    EXPECT_EQ(result, 24);
}

TEST(MultiplicarTest, HandlesZeroInput)
{
    double result = multiplicar(5, 0);
    EXPECT_EQ(result, 0);
}

TEST(MultiplicarTest, HandlesNegativeInput)
{
    double result = multiplicar(-3, 7);
    EXPECT_EQ(result, -21);
}
