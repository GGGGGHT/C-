//
// Created by autorun on 2021/11/8.
//

#ifndef C__ABSTRACT_POLYMORPHIC_H
#include "../common/common.h"
#define C__ABSTRACT_POLYMORPHIC_H

// 抽象类无法实例化对象
class abstract_polymorphic {
public:
    // 纯虚函数
    virtual void test() = 0;
};


class impl1_polymorphic: public abstract_polymorphic{
public:
    void test() {
        INFO("impl1 test method\n");
    }
};

#endif //C__ABSTRACT_POLYMORPHIC_H
