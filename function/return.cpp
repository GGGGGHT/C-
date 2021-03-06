// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <iostream>
#include <cstdlib>

using namespace std;


/**
 * 返回类型和return语句
 *
 * return语句终止当前正在执行的函数并将控制权返回到调用该函数的地方
 * eg:
 * - return;
 * - return expression;
 *
 * 不能返回局部对象的引用或指针
 * @return
 */


// ===============不能返回局部对象的引用或指针 eg:==============
// 返回局部对象的引用是错误的，返回局部对象的指针也是错误的 一旦函数完成，局部对象被释放，指针将指向一个不存在的对象
//const string &manip() {
//    string ret;
//    if (!ret.empty()) {
//        return ret; // error: 返回局部对象的引用
//    } else
//        return "empty"; // error: empty是一个局部临时量
//}
// ===============不能返回局部对象的引用或指针==============


// ===============引用返回左值 eg:==============
// 函数的返回类型决定函数调用是否是左值 返回值是引用，因此调用是个左值，和其他左值一样它能出现在赋值运算符的左侧
// 如果函数返回的是常量引用，则不能给调用的结果赋值
// cannot assign to return value because function 'get_val' returns a const value
/*const*/ char &get_val(string &str, string::size_type ix) {
    return str[ix];
}
// ===============引用返回左值==============

// ===========返回数组指针 eg:==============
// 因为数组不能被拷贝，所以函数不能返回数组 不过可以返回数组的指针或引用
// 表示接收一个int类型的实参，返回一个指针，该指针指向含有10个整数的数组
auto func(int i) -> int (*)[10];

// 如果我们知道函数返回的指针将指向哪个数组，就可以使用decltype着急字声明返回类型
int odd[] = {1, 3, 5};
int even[] = {0, 2, 4};

// 返回一个指针，该指针指向含有3个整数的数组
decltype(odd) *arrPtr(int i) {
    return (i % 2) ? &odd : &even;
}
// ===========返回数组指针==============


// ==============函数重载 begin ============
//void print(const string &);
//void print(double);
//void print(int);
//
//void fooBar(int ival) {
//    print("Value: ");
//    print(ival);
//    print(3.14);
//}
// ==============函数重载 end ============

// ===========函数匹配 begin==============
void f() {
    cout << "call f()" << endl;
}

void f(int ival) {
    cout << "call f(int)" << endl;
}

void f(int ival, int ival2) {
    cout << "call f(int,int)" << endl;
}

void f(double d1, double d2 = 3.14) {
    cout << "call f(double,double)" << endl;
}
// ===========函数匹配  end==============

// ===========实参类型转换  start==============
void ff(int);
void ff(short);
// ff('a'); 将char提升成int

void manip(long);
void manip(float);
// manip(3.14) 二义性
// ===========实参类型转换  end==============

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

// main函数允许没有return直接结束
int main() {
    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A'; // 将s[0] 的值改为 A
    cout << s << endl;

    // 调用 f(double,double)
    // f(int) double可以转换成形参类型int
    // f(double,double) 第二个形参提供了默认值，而第一个形参的类型正好为double
    f(5.6);
    // 二义性调用
    // f(42, 2.56);
    // f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.54, 3.1);
    return 0;
}