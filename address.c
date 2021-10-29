// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <stdio.h>

struct pencil {
    int hardness;
    char marker;
    int number;
};

/**
 * 对结构变量本身进行操作时，必须用“.”运算符。但若使用结构指针，必须使用箭头运算符。
 * @return 0
 */
int main() {
    /*int a = 55, b = 66, *p = &a;
    printf("&a: %#p, &b: %#p, &p: %#p\n", &a, &b, &p);
    printf("%d %d &a: %#p, &p: %#p\n", a, b, p, &p);

    a = 88;
    *p = a;

    printf("%d %d &a: %#p, &p: %#p\n", a, *p, p, &p);
    p = &b;

    printf("%d %d &b: %#p, &p: %#p\n", a, *p, p, &p);*/

    struct pencil p[3];
    struct pencil *pen;

    p[0].hardness = 2; p[0].marker='F'; p[0].number=485;
    p[1].hardness = 0; p[1].marker='G'; p[1].number=38;
    p[2].hardness = 3; p[2].marker='E'; p[2].number=105;
    printf("Hardness Marker number \n");
    for (pen = p; pen <= p + 2; ++pen) {
//        printf("%4d%8c%8d\n", (*pen).hardness, (*pen).marker, (*pen).number);
        printf("%4d%8c%8d\n", pen -> hardness, pen -> marker, pen -> number);
    }
    return 0;
}
