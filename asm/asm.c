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