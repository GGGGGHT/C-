// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/2.
//

#include "dynamicMemoryManager.h"

int main() {

  int i = 42;
  int &r = i; // 正确 r引用i
  // int &&rr = i; // 错误 不能将一个右值引用 绑定到一个左值上
  // int &r2 = i * 42; // 错误 i * 42是一个右值
  const int &r3 = i * 42; // 正确 可以将一个const 的引用绑定到一个右值上
  int &&r2 = i * 42; // 将rr2 绑定到乘法结果上
  // 右值引用只能绑定到临时对象
  int &&rr1 = 42; // 正确  字面常量是右值
  // int &&rr2 = rr1; // 错误  表达式rr1是左值
  // 使用move函数
  int &&rr3 = std::move(rr1);

  cout << "hello" << endl;
}