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