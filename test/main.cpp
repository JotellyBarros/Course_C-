/*
 * Copyright (c) 2020 Jotelly Barros. All rights reserved.
 */

// #include <iostream>
#include "gtest/gtest.h"
// #include "my_utils.hpp"

TEST(One, Simple) {
  EXPECT_EQ(1, 2);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
