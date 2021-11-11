// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
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
