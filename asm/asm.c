// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by 75685 on 2021/8/18.
// AT&T汇编语法与intel语法的区别 
// 1. 寄存器名称前需要加%前缀,例如使用eax寄存器时,应该写作%eax,在intel语法中则不需要,对于立即数的命名也不需要加上$符,而AT&T语法需要对立即数加上$符
// 2. 操作数顺序 AT&T语法中第一个操作数是源操作数,第二个操作数是目的操作数 在intel语法中 第一个数是目的操作数,第二个操作数是源操作数
//    操作码 目的操作数 源操作数 intel语法
//    mov    ebx,eax 将eax的内容传送到ebx中
//    操作码 源操作数 目的操作数 AT&T语法
//    mov    %eax,%ebx 将eax的内容传送到ebx中
// 3. 操作数大小 
//    intel语法:
//    mov al, byte ptr bl
//    AT&T
//    movb %al, %bl byte传输
//    movw %ax, %bx word传输
//    movl %eax, %ebx long传输


#include <stdio.h>

int main() {
    int a = 10, b;
    // 寄存器名字前面加了%%,这是用来使GCC区分操作数和寄存器的,操作数使用%作为前缀,而寄存器使用%%作为前缀
    __asm__("movl %1, %%eax\n\t"  
            "movl %%eax, %0\n\t"
    :"=r"(b)
    :"r"(a)
    :"%eax"
    );

    printf("Result: %d, %d\n", a, b);
    return 0;
}



inline jint     Atomic::cmpxchg    (jint     exchange_value, volatile jint*     dest, jint     compare_value) {
  int mp = os::is_MP();
  __asm__ volatile (LOCK_IF_MP(%4) "cmpxchgl %1,(%3)"
                   : "=a" (exchange_value)
                   : "r" (exchange_value), "a" (compare_value), "r" (dest), "r" (mp)
                   : "cc", "memory");
  return exchange_value;
}
// 第一个冒号后跟的是输出 "=a" (exchange_value) 输出
// 第二个冒号后跟的是输入  "r" (exchange_value), "a" (compare_value), "r" (dest), "r" (mp) 输入 输入参数有4个
// 第三个冒号表示clob 表示可能会影响寄存器 cc寄存器
// %1 表示 exchange_value
// %3 表示 dest
