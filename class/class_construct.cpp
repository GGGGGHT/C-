#include <iostream>

// using namespace std;

/**
 *
 * @param argc
 * @param argv
 * @return
 */

// =====构造函数======
// 有时可以忽略数据成员化和赋值之间的差异，但是如果成员是const或者是引用的话，必须将其初始化 如果成员属于某种类类型且该类没有定义默认构造函数时，也必须将这个成员初始化
class ConstRef {
public:
	ConstRef(int ii);

private:
	int i;
	const int ci;
	int &ri;
};

// 必须显式地初始化引用和const成员 如果成员是const,引用,或者属于某种未提供默认构造函数的类类型，我们必须通过构造函数初始值列表为这些成员提供初值
ConstRef::ConstRef(int ii) : i(ii), ci(ii), ri(i) {
}

class X {
	int i;
	int j;

public:
	// warning: field 'j' is uninitialized when used here
	X(int val): j(val), i(j) {}
};

// =====构造函数======
int main(int argc, char **argv) {
	ConstRef ref(1);
	// std::cout << ref << std::endl;
	return 0;
}