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
//    return a + b;
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