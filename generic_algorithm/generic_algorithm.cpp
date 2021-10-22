#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

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
}