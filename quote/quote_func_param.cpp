// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/2.
//
#include "quote_func_param.h"

// 值传递
void sum(int a, int b)
{
    int rst = a + b;
//    INFO("sum result : %d\n" rst);
    cout << "sum result : " << rst << endl;
}

// 指针传递
void sum(int *a, int *b)
{
    int rst = *a + *b;
    INFO("sum result point : %d \n", rst);
}

// 引用传递
void sum1(int &a, int &b)
{
    int rst = a + b;
    INFO("sum result quote : %d \n", rst);
}

int main()
{
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;
    sum(pa, pb);
    sum(a, b);

    sum1(a, b);
    return 0;
}