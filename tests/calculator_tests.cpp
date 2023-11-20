#include "../src/calculator.h"

#include <gtest/gtest.h>

using namespace std;

TEST(Calculator, add) {
    // given
    auto *calculator = new Calculator();
    int a = 1;
    int b = 2;

    // when
    int result = calculator->add(a, b);

    // then
    ASSERT_EQ(result, a + b);
}

TEST(Calculator, add_inputException) {
    // given
    auto *calculator = new Calculator();
    int a = 1000000;
    int b = 2;

    // when, then
    ASSERT_THROW(calculator->add(a, b), invalid_argument);
}

TEST(Calculator, subtract) {
    // given
    auto *calculator = new Calculator();
    int a = 1;
    int b = 2;

    // when
    int result = calculator->subtract(a, b);

    // then
    ASSERT_EQ(result, a - b);
}

TEST(Calculator, subtract_inputException) {
    // given
    auto *calculator = new Calculator();
    int a = 1000000;
    int b = 2;

    // when, then
    ASSERT_THROW(calculator->subtract(a, b), invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
