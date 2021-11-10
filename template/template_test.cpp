// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#include "template_test.h"

int main()
{
//    int i = 39;
//    int j = 20;
//    cout << "Max(i, j): " << Max(i, j) << endl;
//
//    double f1 = 13.5;
//    double f2 = 20.7;
//    cout << "Max(f1, f2): " << Max(f1, f2) << endl;
//
//    string s1 = "Hello";
//    string s2 = "World";
//    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

// TODO 晚上调试
//    try {
//        Stack<int> intStack;  // int 类型的栈
//        Stack<string> stringStack;    // string 类型的栈
//
//        // 操作 int 类型的栈
//        intStack.push(7);
//        cout << intStack.top() <<endl;
//
//        // 操作 string 类型的栈
//        stringStack.push("hello");
//        cout << stringStack.top() << std::endl;
//        stringStack.pop();
//        stringStack.pop();
//    }
//    catch (exception const& ex) {
//        cerr << "Exception: " << ex.what() <<endl;
//        return -1;
//    }

    int i = echo(1);
    INFO("echo value: %d\n", i);
    int *j = new int;
    *j = 100;
    INFO("echo value j: %d\n", echo(*j));

    return 0;
}
