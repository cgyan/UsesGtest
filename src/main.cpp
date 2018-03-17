#include <iostream>
using namespace std;
#include "Point.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
using namespace ::testing;

TEST(RandomTests, TestingSomethingRandom) {
    EXPECT_TRUE(false);
}

int main(int argc, char * argv[]) {
    cout << "using gtest" << endl;
    Point p;
    p.x = 1;
    p.y = 2;

	InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
