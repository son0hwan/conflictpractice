#include "gmock/gmock.h"

class Cal {
public:
	int getSum(int a, int b) {
		return a + b;
	}
  int getZegop(int a) {
		return a * a;
  }
};

TEST(conflicttest, TC_SUM) {
	Cal* cal = new Cal();
	int expect = 5;
	int actual = cal->getSum(2, 3);
	EXPECT_EQ(expect, actual);
}

//테스트 케이스 작성
TEST(conflicttest, zegoptest1) {
	Cal cal;
	int expected = 9;
	int actual = cal.getZegop(3);
	EXPECT_EQ(expected, actual);
}

TEST(conflicttest, zegoptest2) {
	Cal cal;
	int expected = 1764;
	int actual = cal.getZegop(42);
	EXPECT_EQ(expected, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}