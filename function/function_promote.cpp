//
// Created by autorun on 2021/11/2.
//

#include "function_promote.h"

// 函数默认参数
int sum(int a, int b= 100)
{
    return a + b;
}
int sum2(int a = 1000, int b= 100)
{
    return a + b;
}

// 函数提升
int main()
{
    int rst = sum(10);
    INFO("rst : -> %d\n", rst);
    int rst2 = sum2();
    INFO("rst : -> %d\n", rst2);

    return 0;
}