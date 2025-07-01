#include "gmock/gmock.h"

class Cal {
public:
	int getDivide(int a, int b) {
		return a / b;
	}
};

TEST(TS, TC_DEVIDE) {
	Cal cal;
	int expect = 5;
	int actual = cal.getDivide(10, 2);
	EXPECT_EQ(expect, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}