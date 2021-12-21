// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/10.
//

#include "class_template_test.h"

void intStackTest()
{
    Stack<int>         intStack;  // int 类型的栈
    intStack.push(7);
    INFO("int stack topValue: %d\n", intStack.top());
}

void stringStackTest()
{
    Stack<string> stringStack;

    stringStack.push("hello");
    stringStack.push(" ");
    stringStack.push("world!");
    cout << "string stack value: " << stringStack.top() << endl;
//    INFO("string stack value: %s\n", stringStack.top());
    stringStack.pop();
    stringStack.empty();
    cout << "string stack is empty:" << stringStack.empty() << endl;
}
void classStackTest()
{
//    Stack<element> elementStack;
//
//    element el1, el2, el3;
//    elementStack.push(el1);
//    elementStack.push(el2);
//    elementStack.push(el3);
//    cout << "element stack value: " << elementStack.top() << endl;
////    INFO("string stack value: %s\n", stringStack.top());
//    elementStack.pop();
//    elementStack.empty();
//    cout << "string stack is empty:" << elementStack.empty() << endl;
}

int main()
{
   intStackTest();
    INFO("--------------------------------\n");
    stringStackTest();
    INFO("--------------------------------\n");
    return 0;
}