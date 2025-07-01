#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드 작성
	int getGop(int a, int b) {
		return a * b;

	int getZegop(int a) {
		return a * a;

	int getSumSum(int a, int b, int c) {
		return a + b + c;
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

TEST(t1, gopTest) {
	Cal cal;
	EXPECT_EQ(6, cal.getGop(2,3));
}

TEST(t1, SumSum) {
	Cal cal;
	EXPECT_EQ(0, cal.getSumSum(-1, 0, 1));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}