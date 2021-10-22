#include <stack>
#include <iostream>

using namespace std;
// ==========
// stack 默认基于 deque 实现,也可以在 list 或 vector 上实现
// stack API
// s.pop() 弹出栈顶元素,但不返回该元素值
// s.top() 返回栈顶元素,但不将元素弹出
// s.push(item) 创建一个新元素压入栈顶,该元素通过拷贝或移动 item 而来
// s.emplace(args) 由 args 构造
// ==========
int main() {
	stack<int> intStack;
	for (size_t ix = 0; ix != 10; ++ix) {
		intStack.push(ix);
	}

	while (!intStack.empty()) {
		int value = intStack.top();
		cout << "top: " << value << endl;
		intStack.pop();
	}
}