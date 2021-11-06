// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/3.
//

/**
 * 运算符重载与类型转换
 *
 * 运算符作用于类类型的运算对象时,可以通过运算符重载重新定义该运算符的含义.
 * 对于一个运算符函数来说,它或者是类的成员,或者至少含有一个类类型的参数
 * int operator+(int,int) // 错误,不能为int重定义内置的运算符
 *
 * 某些运算符不应该被重载.通常情况下,不应该重载逗号,取地址,逻辑与和逻辑或运算符
 */
#include "operatorOverride.h"
#include <iostream>

/**
 * 输入和输出运算符重载
 *
 * 通常情况下,输出运算符的第一个形騑是一个非常量ostream对象的引用.
 * 为了与其他输出运算符保持一致, operator<<一般要返回它的ostream形参
 * 输出运算符需要尽量减少格式化操作
 * 输出运算符应该主要负责打印对象的内容而非控制格式.因为不应该打印换行符
 * @return
 */
class Sales_data {};
std::ostream &operator<< (std::ostream &os, const Sales_data &item)
{
  // print
  return os;
}

/**
 * 输入输出运算符必须是非成员函数
 * 输入运算符必须处理输入可能失败的情况,而输出运算符不需要.
 *
 * 输入时的错误:
 * 在执行输入运算符时可能会发生错误:
 * 1. 当流含有错误类型的数据时读取操作可能失败.
 * 2. 当读取操作到达文件末尾或者遇到输入流的其|他错误时也会失败.
 *
 * 当读取操作发生错误时,输入运算符负责从错误中恢复
 * @return
 */
std::istream &operator>> (std::istream &is, Sales_data &item)
{
  // operation
  if (is) // 在使用前需要检查输入流的合法性.
	// do some thing
	;
  else; // do other thing
  return is;
}

/**
 * 算术和关系运算符
 *
 * 通常情况下,我们把算术和关系运算符定义成非成员函数以允许对左侧或右侧的运算对象进行转换. 因为这些运算符一般不需要改变运算对象的状态.所以形参都是常量的引用 .
 * 如果类同时定义了自述运算符和相关的复合赋值运算符,通常情况下应该使用复合赋值来实现自述运算符
 *
 * 复合赋值运算符
 * 作为成员的二元运算符,左侧运算对象绑定到隐式的this指针
 * 赋值运算符必须定义成类的成员,复合赋值运算符通常情况下也应该定义为类的成员
 * 这两类运算符都应该返回左侧运算对象的引用
 *
 * @return
 */

/**
 * 下标运算符
 * 必须是成员函数 通常以访问元素的引用作为返回值
 * 通常会定义两个版本: 一个返回普通引用,另一个是类的常量成员并且返回常量引用
 * @return
 */


/**
 * 递增和递减运算符
 * 1. 前置 ++i
 * 2. 后置 i++
 *
 * 通过一个额外的int类型形参来区分前置,后置运算符
 * @return
 */
class StrBlobPtr {
 public:
  // 递增和递减运算符 前置运算符
  StrBlobPtr &operator++ ();
  StrBlobPtr &operator-- ();
  // 后置运算符 后会运算符应该返回对象的原值,返回的形式是一个值而非引用
  StrBlobPtr operator++ (int);
  StrBlobPtr operator-- (int);
};

/**
 * 函数调用运算符
 */
struct absInt {
  int operator() (int val) const
  {
	return val < 0 ? -val : val;
  }

  int operator() (int v1, int v2) const
  {
	return v1 + v2;
  }
};

class PrintString {
 public:
  PrintString (std::ostream &o = std::cout, char c = ' ') :
	  os (o), sep (c)
  {}
  void operator() (const std::string &s)
  { os << s << sep; }

 private:
  std::ostream &os;
  char sep;
};

/**
* 标准库定义的函数对象
 * <functional>
*/
void stdFunctionObject ()
{
  std::plus<int> intAdd; // 可执行int加法的函数对象
  std::negate<int> intNegate;
  auto res = intAdd (10, 20);

  std::cout << res << std::endl;
  res = intNegate (-5);
  std::cout << res << std::endl;
}

/**
 * C++可以调用的对象有: 函数,函数指针,lambda表达式,bind创建的对象以及重载了函数调用运算符的类
 * 不同类型的可调用对象可以共享同一种调用形式
 * @return
 */
// ====================调用形式int(int,int)=============
int add (int i, int j)
{ return i + j; }
auto mod = [] (int i, int j)
{ return i % j; };
struct divide {
  int operator() (int denominator, int divisor)
  {
	return denominator / divisor;
  }
};
// ====================调用形式int(int,int)=============

int main ()
{
  absInt abs_int;

  std::cout << abs_int (-5) << std::endl;
  std::cout << abs_int (-5, 2) << std::endl;

  PrintString printer;
  printer ("hello");
  PrintString errors (std::cerr, '\n');
  errors ("world");

  stdFunctionObject ();
}











