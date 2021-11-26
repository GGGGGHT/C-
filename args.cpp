// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/26.
//

#include "args.h"

template <class T> T add(T a, T b, T c, T d, T e, T f) {
  T t = a + d;
  T m = b + e;
  T p = c + f;

  return t + m + p;
}
/**
 * 使用模板生成int,long,double
 * __Z3addIdET_S0_S0_S0_S0_S0_S0_ double
 * __Z3addIlET_S0_S0_S0_S0_S0_S0_ long
 * __Z3addIiET_S0_S0_S0_S0_S0_S0_ int
 *
 * 在linux中传递参数时使用寄存器
 *
 * 64位机器整数型 rdi,rsi,rdx,rcx,r8,r9
 * 32位机器整数型 edi,esi,edx,ecx,r8d,r9d
 * 浮点型 xmm0,xmm1,xmm2,xmm3,xmm4,xmm5,xmm6
 */
#include <iostream>
using namespace std;
int main() {
  auto a = add(1, 2, 3, 4, 5, 6);
  cout << a << endl;
  auto b = add(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
  cout << b << endl;
  auto c = add(1l, 2l, 3l, 4l, 5l, 6l);
  cout << c << endl;
}

// objdump -S args
// 0000000100003cb0 __Z3addIdET_S0_S0_S0_S0_S0_S0_:
// 100003cb0: 55                           pushq   %rbp
// 100003cb1: 48 89 e5                     movq    %rsp, %rbp
// 100003cb4: f2 0f 11 45 f8               movsd   %xmm0, -8(%rbp)
// 100003cb9: f2 0f 11 4d f0               movsd   %xmm1, -16(%rbp)
// 100003cbe: f2 0f 11 55 e8               movsd   %xmm2, -24(%rbp)
// 100003cc3: f2 0f 11 5d e0               movsd   %xmm3, -32(%rbp)
// 100003cc8: f2 0f 11 65 d8               movsd   %xmm4, -40(%rbp)
// 100003ccd: f2 0f 11 6d d0               movsd   %xmm5, -48(%rbp)
// 100003cd2: f2 0f 10 45 f8               movsd   -8(%rbp), %xmm0
// 100003cd7: f2 0f 58 45 e0               addsd   -32(%rbp), %xmm0
// 100003cdc: f2 0f 11 45 c8               movsd   %xmm0, -56(%rbp)
// 100003ce1: f2 0f 10 45 f0               movsd   -16(%rbp), %xmm0
// 100003ce6: f2 0f 58 45 d8               addsd   -40(%rbp), %xmm0
// 100003ceb: f2 0f 11 45 c0               movsd   %xmm0, -64(%rbp)
// 100003cf0: f2 0f 10 45 e8               movsd   -24(%rbp), %xmm0
// 100003cf5: f2 0f 58 45 d0               addsd   -48(%rbp), %xmm0
// 100003cfa: f2 0f 11 45 b8               movsd   %xmm0, -72(%rbp)
// 100003cff: f2 0f 10 45 c8               movsd   -56(%rbp), %xmm0
// 100003d04: f2 0f 58 45 c0               addsd   -64(%rbp), %xmm0
// 100003d09: f2 0f 58 45 b8               addsd   -72(%rbp), %xmm0
// 100003d0e: 5d                           popq    %rbp
// 100003d0f: c3                           retq

// 0000000100003d10 __Z3addIlET_S0_S0_S0_S0_S0_S0_:
// 100003d10: 55                           pushq   %rbp
// 100003d11: 48 89 e5                     movq    %rsp, %rbp
// 100003d14: 48 89 7d f8                  movq    %rdi, -8(%rbp)
// 100003d18: 48 89 75 f0                  movq    %rsi, -16(%rbp)
// 100003d1c: 48 89 55 e8                  movq    %rdx, -24(%rbp)
// 100003d20: 48 89 4d e0                  movq    %rcx, -32(%rbp)
// 100003d24: 4c 89 45 d8                  movq    %r8, -40(%rbp)
// 100003d28: 4c 89 4d d0                  movq    %r9, -48(%rbp)
// 100003d2c: 48 8b 45 f8                  movq    -8(%rbp), %rax
// 100003d30: 48 03 45 e0                  addq    -32(%rbp), %rax
// 100003d34: 48 89 45 c8                  movq    %rax, -56(%rbp)
// 100003d38: 48 8b 45 f0                  movq    -16(%rbp), %rax
// 100003d3c: 48 03 45 d8                  addq    -40(%rbp), %rax
// 100003d40: 48 89 45 c0                  movq    %rax, -64(%rbp)
// 100003d44: 48 8b 45 e8                  movq    -24(%rbp), %rax
// 100003d48: 48 03 45 d0                  addq    -48(%rbp), %rax
// 100003d4c: 48 89 45 b8                  movq    %rax, -72(%rbp)
// 100003d50: 48 8b 45 c8                  movq    -56(%rbp), %rax
// 100003d54: 48 03 45 c0                  addq    -64(%rbp), %rax
// 100003d58: 48 03 45 b8                  addq    -72(%rbp), %rax
// 100003d5c: 5d                           popq    %rbp
// 100003d5d: c3                           retq
// 100003d5e: 66 90                        nop

// 0000000100003bf0 __Z3addIiET_S0_S0_S0_S0_S0_S0_:
// 100003bf0: 55                           pushq   %rbp
// 100003bf1: 48 89 e5                     movq    %rsp, %rbp
// 100003bf4: 89 7d fc                     movl    %edi, -4(%rbp)
// 100003bf7: 89 75 f8                     movl    %esi, -8(%rbp)
// 100003bfa: 89 55 f4                     movl    %edx, -12(%rbp)
// 100003bfd: 89 4d f0                     movl    %ecx, -16(%rbp)
// 100003c00: 44 89 45 ec                  movl    %r8d, -20(%rbp)
// 100003c04: 44 89 4d e8                  movl    %r9d, -24(%rbp)
// 100003c08: 8b 45 fc                     movl    -4(%rbp), %eax
// 100003c0b: 03 45 f0                     addl    -16(%rbp), %eax
// 100003c0e: 89 45 e4                     movl    %eax, -28(%rbp)
// 100003c11: 8b 45 f8                     movl    -8(%rbp), %eax
// 100003c14: 03 45 ec                     addl    -20(%rbp), %eax
// 100003c17: 89 45 e0                     movl    %eax, -32(%rbp)
// 100003c1a: 8b 45 f4                     movl    -12(%rbp), %eax
// 100003c1d: 03 45 e8                     addl    -24(%rbp), %eax
// 100003c20: 89 45 dc                     movl    %eax, -36(%rbp)
// 100003c23: 8b 45 e4                     movl    -28(%rbp), %eax
// 100003c26: 03 45 e0                     addl    -32(%rbp), %eax
// 100003c29: 03 45 dc                     addl    -36(%rbp), %eax
// 100003c2c: 5d                           popq    %rbp
// 100003c2d: c3                           retq
// 100003c2e: 66 90                        nop