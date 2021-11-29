// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/2.
//

#include "quote_func_result.h"

// 引用做返回值
int &sum1(int a) {
    // 1. 不要将局部变量做为引用返回值
    int i = a;
    return i;
    // 2. 函数的调用可以做为左值
}

// 引用做返回值
int &sum2(int a) {
    // 1. 不要将局部变量做为引用返回值
    static int i = a;
    return i;
    // 2. 函数的调用可以做为左值
    //     sum1(11) = 33;
}

int main() {
    int &sum = sum1(10);
    // 10
    INFO("result %d\n", sum);
    // 乱码
    INFO("result %d\n", sum);
    // 如果函数返回的是引用，则这个调用可以作为左值使用
    sum1(11) = 33;
    // 33
    INFO("rst1 = %d \n", sum);
    // 乱码
    INFO("result %d\n", sum);

    int &rst2 = sum2(100);
    INFO("rst2 = %d \n", rst2);

    sum2(rst2) = sum2(rst2 += 100);
    INFO("rst2 = %d \n", rst2);
    return 0;
}