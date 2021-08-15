#include <stdio.h>

void add(double, double, double *);
int max(int,int);
/**
 * 变量作用域根据其作用的范围分为一个块结构, 一个函数, 一个源文件 或多个文件
 * c语言是以函数为核心的,主函数和函数里都可以使用块结构
 * 函数内部定义的变量称为自动型变量,作用域定义在函数内部.不同的函数里若出现相同的名字的变量,则它们是不相干的.
 * - 自动型变量的作用域仅局限在所定义的函数内部。
 * - 外部型变量在是在任务函数的外部定义的变量,它可以被程序中的所有函数所引用.外部型变量实质上具有"全局型"定义,它的作用域是整个程序.
 * - 静态型变量的定义方法是在类型定义语句之前加关键字static.静态变量可以是内部静态变量或外部静态变量.在函数外部定义的就是外部静态变量,反之则为内部静态变量.
 * 内部静态变量类似于自动型变量,内部静态变量始终存在并占有内存单元,其初始值也只是在进入时赋值一次,而不是在进入函数时被建立或退出函数时被消除
 *
 */
 int c;
void main() {
    {
        int a = 45, b = 98;
        static int sum;
        sum = max(45, 98);
        a += b;
        {
            int a[] = {1, -2, 3, -4, 5}, i = 0;
            static int sum;
            for (i = 0; i < 5; i++) {
                if (a[i] < 0) c = c + a[i];
                else sum = sum + a[i];
            }
            printf("正数和=%d,负数和=%d\n", sum, c);
        }
        c = max(a, sum);
        printf("sum = %d\n", sum);
        printf("max = %d\n", c);
        c = a + b + sum;
    }
    printf("总和=%d\n", c);
    return;
    /*double a = 5.5,b = 15.39, c= 0;
    add (a,b,&c);
    printf("%f\n",c);
    c = 10 * c;
    printf("%f\n",c);

    extern int y;
    printf("%d", y);*/
}

int max(int a,int b) {
    return a > b ? a : b;
}

int y = 3;

void add(double m, double n, double *q) {
    *q = m + n + 0.0065;
    return;
}
