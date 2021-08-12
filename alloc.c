//
// Created by 75685 on 2021/8/12.
//
#include "stdio.h"
#include "malloc.h"
#define NULL 0
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
//    char *p,*q;
//    p = q = (char *) malloc(100);
//    scanf("%s", q);
//    while (*p != '\0')
//        p++;
//    printf("%lld\n", p - q);
//    // 使用free时要注意,指向同一个目标的指针只能释放一次,因为释放后另一个已经是空指针,再free就要出错
//    free(q);

    /*float *p, *q;
    p = q = (float *) malloc(10 * sizeof(float));
    if (q == NULL) {
        printf("error");
        return -1;
    }

    for (int i = 0; i < 10; i++,q++)
        scanf("%f", q);
    float min = 0xffffff, sum = 0;
    for (int i = 0; i < 10; ++i, ++p) {
        sum += *p;
        if (min > *p) {
            min = *p;
        }
    }

    printf("min: %f,sum: %f", min, sum);*/


//    char *p, *q;
//    printf("%s\t%s\n", p, q);
//    printf(p, q);
//    char s[] = "abcd";
//    int i = 4;
//    printf("%s\n", s);
//    for (i = 0; i < 4; i++) {
//        printf("%u ", s[i]);
//    }
//    printf("\n");
    // 一维数据越界错误
    int i = 0, a[5];
    // index of out bound
    for (i = 1; i <= 5; i++) {
        a[i] = i;
    }
    // c[4] = '\n' error
    char c[5] = "abcde";
    return 0;
}
