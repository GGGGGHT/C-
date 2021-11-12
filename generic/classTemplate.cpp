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
extern template class Blob<std::string>;

template class Blob<std::string>;

/**
 * 模板实参推断: 从函数实参来确定模板实参的过程称为 模板实参推断66
 *
 */

/**
 * 控制实例化
 * 当模板被使用时才会进行实例化,所以当两个或多个独立编译的源文件使用了相同的模板,并提供了相同的模板参数时,每个文件中都会有该模板的一个实例.
 *
 * 显式实例化形式
 * extern template declaration; 实例化声明
 * template declaration; 实例化定义
 * @return
 */
int main() {
  Blob<int> squares = {0, 1, 2, 3, 4, 5};
  for (size_t i = 0; i != squares.size(); i++) {
    squares[i] = i * i;
  }

  for (size_t i = 0; i != squares.size(); i++) {
    cout << squares[i] << endl;
  }

}