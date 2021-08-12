//
// Created by 75685 on 2021/8/12.
//
#include "stdio.h"
#include "malloc.h"

int main(int argc, char *argv[]) {
    /*char *s;
    int n;

    s = (char *) malloc(50);
    if (s == NULL) {
        printf("OOM");
        return -1;
    }

    scanf("%s", s);
    for (n = 0; *s != '\0'; ++s) {
        ++n;
    }
    s = s - n;
    free(s);
    printf("%d", n);
*/
/*    int i,*p;
    p = (int *) malloc(8);
    for (i = 0; i < 2; ++i, ++p) {
        scanf("%d", p);
    }
    p = p - 2;
    for (i = 0; i < 2; ++i, ++p)
        printf("%d \t", *p);

    p -= 2;
    // 释放内存的语句free(p) `中的参数p，必须是申请到的动态内存的首地址。
    free(p);*/
    char *p,*q;
    p = q = (char *) malloc(100);
    scanf("%s", q);
    while (*p != '\0')
        p++;
    printf("%lld\n", p - q);
    // 使用free时要注意,指向同一个目标的指针只能释放一次,因为释放后另一个已经是空指针,再free就要出错
    free(q);
    return 0;
}
