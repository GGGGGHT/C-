// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/10.
//

#include "template.h"
#include <iostream>
#include <vector>
// #include <string>
using namespace std;
/**
* 定义模板
*/
int compare (const std::string &v1, const std::string &v2)
{
  if (v1 < v2)
	return -1;
  if (v1 > v2)
	return 1;

  return 0;
}

int compare (const double &v1, const double &v2)
{
  if (v1 < v2)
	return -1;
  if (v2 < v2)
	return 1;
  return 0;
}

/**
* 定义通用函数模板
 *
 * 模板定义以关键字template开始  后跟一个模板参数列表, 是使用逗号分隔的一个或多个模板参数 使用<>包围起来
 * 在模板定义中,模板参数不能为空
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

int main ()
{
  // 调用函数模板时,编译器用函数实参来推断模板实参.
  // 编译器用推断出的模板参数来为我们 实例化 一个特定版本的函数
  // 实例化出 int compare(const int&, const int&)
  std::cout << compare (1, 0) << std::endl; // T为int
  std::vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
  // 实例化出int compare(const vector<int>& const vector<int>&)
  std::cout << compare(vec1,vec2) << std::endl; // T为vector<int>
}