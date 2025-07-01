#include "gmock/gmock.h"

class Cal {
public:
	int getDivide(int a, int b) {
		if (b == 0)
			return 0;

		return a / b;
	}
};

TEST(TS, TC_DEVIDE) {
	Cal cal;
	int expect = 5;
	int actual = cal.getDivide(10, 2);
	EXPECT_EQ(expect, actual);
}

TEST(TS, TC_DEVIDE2) {
	Cal cal;
	
	EXPECT_EQ(0, cal.getDivide(1, 0));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}