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