// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
//
// Created by autorun on 2021/11/10.
//

#include "class_template_test.h"

int main()
{
    Stack<int>         intStack;  // int 类型的栈
    intStack.push(7);

    INFO("int stack topValue: %d\n", intStack.top());
    return 0;
}