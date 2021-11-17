//
// Created by autorun on 2021/11/2.
//
#include "quote_const_test.h"

void showValue(const int &value)
{
    // 如果修改value
    // 编译报错 quote/quote_const_test.cpp:10:11: error: cannot assign to variable 'value' with const-qualified type 'const int &'
//    value = 200;
    INFO("value: -> %d \n", value);
}

int main()
{
    showValue(100);

    // int &ref = 100; // 前面说过因为引用本质实际是指针常量，所以引用本身需要一个合法的空间。因此此行错误
    // 但是将上面一行修改为
    const int &ref = 101;
    // 则不报错了。原因是编译器在处理此行代码时将代码优化为
    // `int temp = 100; `
    // `const int &ref = temp;`
    showValue(ref);
    return 0;
}