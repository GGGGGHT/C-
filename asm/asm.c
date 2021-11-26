// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by 75685 on 2021/8/18.
//
#include <stdio.h>

int main() {
    int a = 10, b;
    __asm__("movl %1, %%eax\n\t"
            "movl %%eax, %0\n\t"
    :"=r"(b)
    :"r"(a)
    :"%eax"
    );

    printf("Result: %d, %d\n", a, b);
    return 0;
}



inline jint     Atomic::cmpxchg    (jint     exchange_value, volatile jint*     dest, jint     compare_value) {
  int mp = os::is_MP();
  __asm__ volatile (LOCK_IF_MP(%4) "cmpxchgl %1,(%3)"
                   : "=a" (exchange_value)
                   : "r" (exchange_value), "a" (compare_value), "r" (dest), "r" (mp)
                   : "cc", "memory");
  return exchange_value;
}
// 第一个冒号后跟的是输出 "=a" (exchange_value) 输出
// 第二个冒号后跟的是输入  "r" (exchange_value), "a" (compare_value), "r" (dest), "r" (mp) 输入 输入参数有4个
// 第三个冒号表示clob 表示可能会影响寄存器 cc寄存器
// %1 表示 exchange_value
// %3 表示 dest
