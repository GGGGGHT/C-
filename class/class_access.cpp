// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <iostream>

using namespace std;

/**
 * struct 与 class 两个关键字都可以定义类
 * 不同的是 struct关键字 定义在第一个访问说明符之前的成员是 public 的
 * class关键字 定义在第一个访问说明符之前的成员是 private 的
 * 当希望定义类的所有成员是public的时，使用struct, 反之，如果希望成员是private的 使用class
 */
class Sales_data : public error_code {
	// ========友元==========
	// 为Sales_data的非成员函数所做的友元声明
	friend Sales_data add(const Sales_data &, const Sales_data &);

	friend istream &read(istream &, Sales_data &);

	friend ostream &print(ostream &, const Sales_data &);
	// ========友元==========

	// 如何使用class关键字定义类 则aaa是无法被访问
	// 如果使用struct 则aaa可以被访问到
	// string aaa;
public: // 访问说明符
	// 构造函数 C++11标准 生成默认的构造函数
	Sales_data() = default;

	// bookNo(s) 构造函数初始值列表 下同
	Sales_data(const string &s) : bookNo(s) {}

	Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}

	Sales_data(istream &);

	// 关于sales_data对象的操作
	string isbn() const { return bookNo; }

	Sales_data &combine(const Sales_data &);

private: // 访问说明符
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	double avg_price() const {
		return units_sold ? revenue / units_sold : 0;
	}
};

// ============Sales_data接口的非成员组成部分的声明
Sales_data add(const Sales_data &, const Sales_data &);

istream &read(istream &, Sales_data &);

ostream &print(ostream &, const Sales_data &);
// ===========Sales_data接口的非成员组成部分的声明

//int main(int argc, char **argv) {
//	Sales_data data;
//	// cout << "--> " << data.aaa << endl;
//	// cout << data.bookNo << endl; error无法访问 private
//	return 0;
//}