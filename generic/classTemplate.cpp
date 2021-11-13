// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/11.
//

#include "classTemplate.h"
#include <iostream>

using namespace std;

// 显式实例化 对每个实例化声明,在程序中某个位置必须有其显式的实例化定义
extern template
class Blob<std::string>;

template
class Blob<std::string>;

/**
 * 模板实参推断: 从函数实参来确定模板实参的过程称为 模板实参推断66
 * 模板重载:　函数模板可以被另一个模板或一个普通非模板函数重载。名字相同的函数必须具有不同数量或类型的参数。
 */
/*template <typename T> string debug_rep(const T &t) {
    std::ostringstream  res;
    res << t;
    return res.str();
}

template <typename T> string debug_rep(T *p) {
    std::ostringstream  ret;
    ret << "Pointer: " << p;
    if(p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer";

    return ret.str();
}*/
/**
 * 控制实例化
 * 当模板被使用时才会进行实例化,所以当两个或多个独立编译的源文件使用了相同的模板,并提供了相同的模板参数时,每个文件中都会有该模板的一个实例.
 *
 * 显式实例化形式
 * extern template declaration; 实例化声明
 * template declaration; 实例化定义
 * @return
 */



// =========可变参数模板==============
/**
 * 可接受可变数目的模板函数或模板类. 可变数目的参数被称为参数包.
 * 模板参数包（template parameter packet），表示零个或多个模板参数；
 * 函数参数包（function parameter packet），表示零个或多个函数参数。
 * @return
 */
template<typename T, typename ... Args>
void foo(const T &t, const Args &... rest);

// 需要知道包中有多少元素时，可以使用sizeof…运算符
template<typename  ...Args>
void g(Args ... args) {
    cout << sizeof...(Args) << endl; // 类型参数的数目
    cout << sizeof...(args) << endl; // 函数参数的数目
}

template<class T>
ostream &print(ostream &os, const T &t) {
    return os << t;
}

template<class T, class... Args>
ostream &print(ostream &os, const T &t, const Args... rest) {
    os << t << ", ";

    // 递归调用,打印其他参数
    return print(os, rest...);
}
// =========可变参数模板==============


// =========模板特例化==============
/**
 * 一个特例化版本就是模板的一个独立的定义，在其中一个或多个模板参数被指定为特定的类型
 * 定义函数模板特例化
 * @return
 */
template<typename T>
int compare (const T &v1, const T &v2)
{
    if (v1 < v2)
        return -1;
    if (v2 < v1)
        return 1;
    return 0;
}

#include <cstring>
template<>
int compare(const char *const &p1, const char *const &p2) {
    return strcmp(p1, p2);
}

// =========模板特例化==============
int main() {
//  Blob<int> squares = {0, 1, 2, 3, 4, 5};
//  for (size_t i = 0; i != squares.size(); i++) {
//    squares[i] = i * i;
//  }
//
//  for (size_t i = 0; i != squares.size(); i++) {
//    cout << squares[i] << endl;
//  }
    // 调用可变参数模板
//    print(std::cout, "a", "b", "c");
    std::cout << compare("hi", "hello") << std::endl;
}