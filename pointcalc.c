//
// Created by 75685 on 2021/8/11.
//

#include "stdio.h"
#include <stdlib.h>

/**
 * C语言的地址能进行某种运算，即指针可以与整数相加减。若p为指针，n为整数，则可以使用p+n或p-n。
 * 编译程序在具体实现时并不是直接将n的值加到p上，而是要将n乘上一个“比例因子”，然后再加上p。
 * 这是因为不同类型的数据实际存储所占的单元数不同，如char类型为1字节，int类型为2字节（VC为4字节）,
 * long和float类型为4字节，double类型为8字节等，这些数分别为它们的“比例因子”，
 * 具体采用哪个作为比例因子，取决于p指向的数据是什么类型。
 * 对用户来说，不需要了解编译程序内部的实现，只要将p+n看成将指针p移动n个数（不必涉及每个数所占的字节数）的位置。
 * 指针应该指向一个有效的地址
 * 内存地址的有效性: 能被CPU访问的地址才是有效的地址,除此之外都是无效的地址
 *
 * @return
 */
union s {
    int a;
    char s1[4];
} uc;

int main() {
//    char *p;
//    if ((p = (char *) malloc(100)) == NULL) {
//        printf("out of memory!\n");
//        exit(1);
//    }
//
//    gets(p);
//    printf("%s\n", p);
//    free(p);

    // point equals
    // *p1 = *p2

    int i = 0;
    uc.a = 0x12345678;
    printf("0x%x\n", &uc);
    for (; i < 4; i++) {
        printf("0x%x 0x%x\n", &uc.s1[i], uc.s1[i]);
    }
    return 0;
}