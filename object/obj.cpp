// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/7.
//
#include "obj.h"

int main()
{
    obj o;
//    o.setNum(100);
    o.getNum();
    obj_sub os;
    os.getNum();
    // 子类调用父类的函数。静态成员，成员变量。静态方法都可以使用加作用域的方式
    os.obj::getNum();
}