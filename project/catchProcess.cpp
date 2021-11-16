// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/16.
//

#include "catchProcess.h"
/**
 * 异常处理
 *
 * 通过throwing来抛出一条表达式来引用一个异常
 * 栈展开:
 *   抛出异常的函数调用语句位于一个try语句块内,则检查与该try块关联的catch子句,如果找到了匹配的catch,就使用该catch处理异常.否则,如果该try语句嵌套上其他try中,
 * 则继续检查与外层try匹配的子句,如果没有找到匹配的catch则退出当前这个主调函数,继续在调用了刚退出的这个函数的其他函数中寻找,以此类推.
 *
 * 栈展开过程中对象被自动销毁
 * @return
 */
int main() {

  // 空的throw只能出现在catch语句或catch语句直接或间接调用的函数之内.如果在处理代码之外的区域遇到了空的throw语句,编译器将调用terminate.
  throw;
}