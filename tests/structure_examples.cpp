#include <gtest/gtest.h>

using namespace std;

TEST(TestSuiteName1, TestName1) {
    cout << "Yaho" << endl;
}

TEST(TestSuiteName1, TestName2) {
    EXPECT_EQ(0, 0);
    EXPECT_NE(0, 1);
}

TEST(TestSuiteName2, TestName1) {
    ASSERT_EQ(0, 0);
    ASSERT_NE(0, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
