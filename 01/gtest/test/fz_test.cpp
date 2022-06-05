#include <gtest/gtest.h>
#include "hello.h"

// Demonstrate some basic assertions.
TEST(FB, One) {
  // Expect two strings not to be equal.
  EXPECT_EQ(std::string("1"),FB(1).FizzBuzz());
}

TEST(FB, two) {
  // Expect two strings not to be equal.
  EXPECT_EQ(std::string("2"),FB(2).FizzBuzz());
}

TEST(FB, Three_Fizz) {
  EXPECT_EQ(std::string("fizz"),FB(3).FizzBuzz());
}

TEST(FB, Fifteen_Fizz_Buzz) {
  EXPECT_EQ(std::string("fizz buzz"),FB(15).FizzBuzz());
}