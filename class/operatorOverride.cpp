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
int main ()
{}