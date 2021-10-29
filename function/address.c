// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by 75685 on 2021/8/15.
//
#include <stdio.h>
#include <stdlib.h>

int a;
static int b;
char ch;
int c = 10;
char s1[] = "Okwe";
char c1 = 'w';
const int i = 25;

char *p = "We are here!";

r1 = 5;
r2 = 7;

/**
 * 可以将存储区分为代码区、文字常量区、全局区（静态区）、堆和栈。
 * 代码区用来存放程序的二进制代码，由系统负责。文字常量区存放字符串常量。
 * 不管是全局字符串常量，还是局部字符串常量，都由系统分配在文字常量区，
 * 这个区位于全局区，当然，局部字符串常量只是存储在文字常量区，并不像全局字符串那样可以共享。
 * @return
 */

void test(int r1) {
    printf("Test函数内:\t r1 = %#p\t r2 = %#p\n", &r1, &r2);
    printf("Test函数内:\t %d * %d = %d\n", r1, r2, r1 * r2);
}

int main() {
    int num = 0;
    const int n = 25;
    volatile int result = 15;
    static int m = 15;
    int *p1, *p2;
    char *pc = "She is here!";
    char st[] = "We are here!";
    extern int r1, r2;
    p2 = (int *) malloc(100);
    p1 = &num;
    printf("全局没初始化:\t%p\t %p\t %p\n", &a, &b, &ch);
    printf("全局初始化:\t%p\t %p\t %p\n", &c, &c1, &s1);
    printf("全局常量:\t%p\t %p\t %p\n", &i, &p);


    printf("局部常量:\t%p\t %p\t %p\t %p\n", &n, pc, p2, &m);
//    printf("局部常量:\t%p\t %p\t %p\t %p\n", &n, pc, p2, &m);
//    printf("局部常量:\t%p\t %p\t %p\t %p\n", &n, pc, p2, &m);
//    printf("局部常量:\t%p\t %p\t %p\t %p\n", &n, pc, p2, &m);
//    printf("局部常量:\t%p\t %p\t %p\t %p\n", &n, pc, p2, &m);
//

    return 0;
}

