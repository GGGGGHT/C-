//
// Created by 75685 on 2021/5/30.
//

#ifndef C__VTABLE_H
#define C__VTABLE_H
#include "iostream"

class A
{
public:
    void foo();
};

void A::foo()
{
    std::cout << "Hello this is foo" << std::endl;
}

class D : public A {
public:
    void foo();
};

void D ::foo() {
    std::cout << "D foo override A" << std::endl;
}
class B  {
public:
    virtual void bar();
    virtual void qux();
};

void B::bar()
{
    std::cout << "This is B's implementation of bar" << std::endl;
}

void B::qux()
{
    std::cout << "This is B's implementation of qux" << std::endl;
}

class C : public B
{
public:
    void bar() override;
};

void C::bar()
{
    std::cout << "This is C's implementation of bar" << std::endl;
}

#endif //C__VTABLE_H
