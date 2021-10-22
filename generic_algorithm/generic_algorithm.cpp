#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <iterator>


using namespace std;

int main() {
	vector<int> vec{1, 2, 3, 4, 42, 5};
	int val = 42;
	auto result = find(vec.cbegin(), vec.cend(), val);
	// std::cout << *result.base() << std::endl;
	std::cout << "The value " << val << (result == vec.cend() ? " is not present." : " is present.") << std::endl;

	std::cout << accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;
	vector<string> strs{"he", "ll", "o ", "wor", "ld"};
	// 将空串当做一个字符串字面值传递给第三个参数是不可以的 因为 const char*上没有定义 + 运算符
	std::cout << accumulate(strs.cbegin(), strs.cend(), string{""}) << std::endl;

	// 将给定的这个值赋予输入序列中的每个元素
	fill(vec.begin(), vec.end(), 33);
	for (auto cb = vec.cbegin(), ce = vec.cend(); cb != ce;) {
		std::cout << *cb++ << std::endl;
	}

	vector<int> v;
	auto iter = back_inserter(v);
	fill_n(iter, 10, 2); // 使用插入迭代器,向v中添加10个0
	std::cout << "size: " << v.size() << ",capacity: " << v.capacity() << std::endl;
	/*std::cout << "size: " << v.size() << ",capacity: " << v.capacity() << std::endl;
	*iter = 42; // v中现在包含一个元素 42
	*iter = 33;
	*iter = 34;
	std::cout << "size: " << v.size() << ",capacity: " << v.capacity() << std::endl;*/
}