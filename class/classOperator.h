//
// Created by 75685 on 2021/10/31.
//

#ifndef C__CLASSOPERATOR_H
#define C__CLASSOPERATOR_H


class classOperator {

};

class Foo {
public :
    Foo(); // 默认构造函数

    Foo(const Foo &); // 如果一个构造函数的第一个参数是自身类类型的引用，且任何额外参数都有默认值，则此构造函数是拷贝构造函数。
};

#endif //C__CLASSOPERATOR_H
