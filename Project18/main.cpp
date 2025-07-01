#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드 작성
	int getSum(int a, int b) {
		return a + b;
	}
};

//테스트 케이스 작성
TEST(CALCULATOR, TC_SUM) {
	Cal* cal = new Cal();
	int expect = 5;
	int actual = cal->getSum(2, 3);
	EXPECT_EQ(expect, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}