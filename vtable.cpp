// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by 75685 on 2021/5/30.
//

#include "vtable.h"
#include "iostream"

// Here, the compiler will create a routine for foo() and remember its address.
// This routine will be executed every time the compiler finds a call to foo() on an instance of A.
// Keep in mind that only one routine exists per class method, and is shared by all instances of the class.
// This process is known as static dispatch or early binding:
// the compiler knows which routine to execute during compilation.
// 静态分派
int main() {
    C *b;
    b->bar();
    b->qux();

    A *a = new D;
    a->foo();
}