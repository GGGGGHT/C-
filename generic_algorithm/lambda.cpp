#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void fcn1() {
	size_t v1 = 42;
	// 将v1拷贝到名为f的可调用对象
	auto f = [v1] { return v1; };
	// 引用捕获
	auto f1 = [&v1] { return v1; };
	v1 = 3;
	auto j = f(); // j为42,f保存了我们创建它时v1的拷贝
	auto j1 = f1(); // j1为3,f保存了我们创建它时v1的拷贝

	cout << j << endl;
	cout << j1 << endl;
}

/**
 *
 * [capture list] (parameter list) -> return type { function body }
 * 捕获列表是lambda所在函数中定义的局部变量的列表 空捕获列表表明此表达式不使用它所在函数中的任何局部变量
 * 可以忽略参数列表和返回类型,但必须包含捕获列表和函数体
 * @return
 */

// 捕获列表
// [] 空捕获列表 不能使用所在函数中的变量
// [names] names是一个逗号分隔的名字列表,这些名字都是lambda所在函数的局部变量.捕获列表变量都被拷贝.如果名字前使用了&,则采用引用捕获方式
// [&] 隐式捕获列表,采用引用捕获方式
// [=] 隐式捕获列表,使用值捕获方式
// [&, identifier_list] identifier_list是一个逗号分隔的列表,包含0个或多个来自所在函数的变量.这些变量使用值捕获方式
// [=, identifier_list] identifier_list是一个逗号分隔的列表,包含0个或多个来自所在函数的变量.这些变量使用引用捕获方式
int main() {
	auto f = []() { return 42; };
	cout << f() << endl;

	vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	auto wb = words.begin(), we = words.end();
	// 当需要比较两个元素时,就会调用给定的lambda表达式
	stable_sort(wb, we, [](const string &a, const string &b) {
		return a.size() < b.size();
	});

	while (wb != we) {
		cout << *wb++ << endl;
	}

	// =======使用捕获列表============
	// 虽然一个lambda可以出现在一个函数中,使用其局部变量,但它只能使用那些明确指明的变量.一个lambda通过将局部变量包含在其捕获列表中来指出将会使用这些变量.
	// 一个lambda只有在其捕获列表中捕获一个它所在函数中的局部变量,在能在函数体中使用该变量
	// 捕获列表只用于局部非static变量,lambda可以直接使用局部static变量和它所在函数之外声明的名字.
	auto sz = words.at(0).size();
	auto wc = find_if(words.begin(), words.end(),
	                  [sz](const string &a) {
		                  return a.size() >= sz;
	                  });

	cout << *wc << endl;
	// =======使用捕获列表============

	// for_each
	for_each(wc, words.end(), [](const string &s) {
		cout << s << " ";
	});
	cout << endl;

	cout << "call fcn1().." << endl;
	fcn1();


	// 隐式捕获
	// 为了指标编译器推断捕获列表,应在捕获列表中写一个'&'或'='. '&'告诉编译器采用捕获引用方式,'='则采用值捕获方式
	// 混合使用隐式捕获和显示捕获时,显式捕获的变量必须使用与隐式捕获不同的方式.
}
