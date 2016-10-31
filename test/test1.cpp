#include "computer_geometry.h"
#include <gtest/gtest.h>
namespace {
  //fixture class
  class MyTest : public ::testing::Test{
   protected:
     //virtual void SetUp() {
     //}
     //virtual void TearDown() {
     //}
  };

  TEST_F(MyTest, SumFuncCheck) {
    EXPECT_EQ(computer_geometry::sum(1.0, 2.0), 3.0);
  }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
