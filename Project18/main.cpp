#include "gmock/gmock.h"

class Cal {
public:
	// �̰��� �ڵ� �ۼ�

	int getSumSum(int operand1, int operand2, int operand3) {
		return operand1 + operand2 + operand3;
	}
};

//�׽�Ʈ ���̽� �ۼ�
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, SumSum) {
	Cal cal;
	EXPECT_EQ(3, cal.getSumSum(1, 1, 1));
	EXPECT_EQ(9, cal.getSumSum(2, 3, 4));
	EXPECT_EQ(0, cal.getSumSum(-1, 0, 1));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}