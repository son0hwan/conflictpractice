#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드 작성
	int getZegop(int a) {
		return a * a;

	int getSumSum(int operand1, int operand2, int operand3) {
		return operand1 + operand2 + operand3;
	}
};

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