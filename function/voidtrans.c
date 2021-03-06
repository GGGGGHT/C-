// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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
 * - 寄存器型变量 只适用于自动型变量和函数的形式参数声明，不适用外部变量和静态变量
 * - volatile型变量 volatile影响编译器编译的结果。如果没有volatile关键字，则编译器可能优化读取和存储。即在本次线程内，当读取一个变量时，为提高存取速度，
 * 编译器优化时会先将变量读取到一个寄存器中，以后再取变量值时，就直接从寄存器中取值.volatile则提醒编译器，使用它所定义的变量随时都有可能发生变化，因此编译后的程序每次需要存储或读取这个变量的时候，
 * 都需要直接从变量地址中读取数据。
 *
 *
 * 变量屏蔽原则：编译程序为块内的自动型变量动态分配存储空间。具体地说，是将这些自动型变量使用的堆栈空间在进入块内时就给予分配，一旦退出该分块，
 * 分配给它的空间就立即消失（即这些自动型变量消失），所以自动型变量既不能被块外的变量或函数所引用，也不能保存其值。当各块具有同名的自动型变量时，屏蔽其他块定义的同名变量，
 * 只有本块定义的自动变量起作用；当退出该块后仍为当前所在块的同名变量起作用。当自动型变量与某外部型变量具有相同的名字时，只有块中定义的自动变量起作用；当退出该块后仍为外部变量起作用。
 *
 * 在复合块中，外层不能使用内层定义的变量，内层可以使用外层的非同名变量，各层使用自己的同名变量。外部变量可供各层的程序使用。
 */

// add函数里的指针q指向主函数变量c的存储地址，*q与c同步变化。调用结束后，系统回收为add函数里形参分配的地址，形参变量也随之消失，而c和*q是同一个地址，所以虽然q消失了，但c却保持为原来*q的值。
/**
 * 外部变量在整个程序中都可存取，它提供了在函数间作数据通信用的另一种方法。
 * 只要将用作函数间通信的参数说明为外部变量，而在函数定义中的形式参数表中和调用函数实参表中不需要给出，
 * 在函数中只要直接对这些外部变量进行操作即可。使用的屏蔽规律与分块变量的相同。
 */
 int c;
 extern int a;
 int b = 50;
 void func1();
 void func2();
void main() {

   /* {
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
    return;*/
    /*double a = 5.5,b = 15.39, c= 0;
    add (a,b,&c);
    printf("%f\n",c);
    c = 10 * c;
    printf("%f\n",c);

    extern int y;
    printf("%d", y);*/
    int i;
    for (i = 1; i < 4; i++) {
        ++a;
        printf("%d\t",a);
        printf("%d\t",b++);
        func1();
        func2();
    }
}

int max(int a,int b) {
    return a > b ? a : b;
}

int y = 3;

void add(double m, double n, double *q) {
    *q = m + n + 0.0065;
    return;
}

int a = 10;
void func1() {
    ++a;
    printf("%d\t", a);
}

void func2() {
    int a = 500;
    int b = 25;
    ++a;
    printf("%d\t%d\n", a, ++b);
}
