// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/7.
//

#ifndef C__POLYMORPHIC_H

#include "../common/common.h"

#define C__POLYMORPHIC_H


class Animal {
public:
    /**
     * 如果增加 `virtual` 之后相当于增加了 `vfptr`( virtual function pointer)
     */
    virtual void speak() {
        INFO("动物在说话\n");
    }
};

class Cat : public Animal {
public:
    virtual void speak() {
        INFO("猫在说话\n");
    }
};

class Dog : public Animal {
public:
    virtual void speak() {
        INFO("狗在说话\n");
    }
};


void doSpeak(Animal &animal) {
    animal.speak();
}

class polymorphic {

};


#endif //C__POLYMORPHIC_H
