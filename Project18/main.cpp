#include "gmock/gmock.h"

class Cal {
public:
	// �̰��� �ڵ� �ۼ�

	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
};

//�׽�Ʈ ���̽� �ۼ�
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, SumSum) {
	Cal cal;
	EXPECT_EQ(0, cal.getSumSum(-1, 0, 1));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}