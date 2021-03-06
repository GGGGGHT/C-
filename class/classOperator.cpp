//
// Created by 75685 on 2021/10/31.
//

#include "classOperator.h"
#include <iostream>

/**
 * 一个类通过定义五种特殊的成员函数来控制类型对象的拷贝,移动,赋值,销毁动作.
 * 1. 拷贝构造函数
 * 2. 拷贝赋值运算符 = 与拷贝构造函数一样,如果类未定义自己的拷贝赋值运算符，编译器会为它合成一个
 * 3. 移动构造函数
 * 4. 移动赋值运算符
 * 5. 析构函数
 *
 *
 * @return
 */
int main() {
  std::cout << "hello" << std::endl;
}