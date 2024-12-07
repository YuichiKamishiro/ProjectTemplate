#include <gtest/gtest.h>

TEST(Simple1, ADD) {
    ASSERT_EQ(1 + 1, 2);
}
TEST(Simple2, ADD) {
    ASSERT_EQ(2 + 2, 4);
}
TEST(Simple3, ADD) {
    ASSERT_EQ(2 + 1, 3);
}