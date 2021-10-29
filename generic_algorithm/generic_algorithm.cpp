// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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

	// vector<int> v1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	// vector<int> v2;
	// int a2[sizeof(a1) / sizeof(*a1)];
	// auto ret = copy(v1.begin(), v1.end(), v2);
	// std::cout << v2.size() << std::endl;
	// std::cout << "a2 size: " << sizeof(a2) / sizeof(*a2) << std::endl;
	// std::cout << *res << std::endl;
	int a1[] = {0, 1, 2, 3};
	int a2[sizeof a1 / sizeof *a1];
	auto ret = copy(begin(a1), end(a1), a2);

	auto b = begin(a2), e = end(a2);
	while (b != e) {
		std::cout << *b++ << std::endl;
	}

	std::cout << "---------" << std::endl;
	vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	// 排序
	sort(words.begin(), words.end());
	auto wb = words.cbegin(), we = words.cend();
	while (wb != we) {
		std::cout << *wb++ << std::endl;
	}
	// 消除重复单词 unique
	auto end_unique = unique(words.begin(), words.end());
	std::cout << "---------" << std::endl;
	wb = words.cbegin(), we = words.cend();
	while (wb != we) {
		std::cout << *wb++ << std::endl;
	}
	std::cout << "words size: " << words.size() << ",words capacity: " << words.capacity() << std::endl;
	words.erase(end_unique,we);
	std::cout << "words size: " << words.size() << ",words capacity: " << words.capacity() << std::endl;
	words.shrink_to_fit();
	std::cout << "words size: " << words.size() << ",words capacity: " << words.capacity() << std::endl;
}