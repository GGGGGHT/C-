// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by 75685 on 2021/8/11.
//

#include <stdio.h>
#include "limits.h"

int main() {
//    int a = 88, b = 58, c = 90, i = 0;
//    int *p = &a;
//    printf("%llu \n", sizeof *p);
//    printf("0x%p,0x%p,0x%p,0x%p,0x%p\n", &a, &b, &c, &i, &p);
//
//    for (i = 0; i < 5; i++, p--) {
//        printf("%d ", *p);
//    }
//
//    printf("%p \n", *p);
//    a = 0x000000000061FE38;
//    printf("%p \n", *(int *) a);
//    a = 66;
//    for (p++, i = 0; i < 4; i++, p++) {
//        printf("%d ", *p);
//    }
//    printf("%d ", *p);
//    printf("%p \n", p);

    int a = 0x12345678, i = 0;
    char* p = (char *) 0X000000000061FE3C;
    printf("%#p, %#X\n", &a, p);
    for (i = 0; i < 4; i++, p++) {
        printf("%#p, %#x\n", p, *p);
    }

    return 0;
}