// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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
