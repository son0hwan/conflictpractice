#include "gmock/gmock.h"

class Cal {
public:
	// �̰��� �ڵ� �ۼ�
	int getSum(int a, int b) {
		return a + b;
	}
};

//�׽�Ʈ ���̽� �ۼ�
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