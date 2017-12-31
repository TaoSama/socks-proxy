#include <gtest/gtest.h>

#include "hello.h"

TEST(HelloWorld, Greet) {
    EXPECT_EQ(HelloWorld::Greet(), "Hello World");
}
