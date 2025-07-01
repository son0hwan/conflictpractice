#include "gmock/gmock.h"

class Cal {
public:
	// �̰��� �ڵ� �ۼ�
	int getZegop(int a) {
		return a * a;
	}
};

//�׽�Ʈ ���̽� �ۼ�
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