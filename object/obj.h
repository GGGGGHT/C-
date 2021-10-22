// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/7.
//
#ifndef C__OBJ_H
#include "../common/common.h"
#define C__OBJ_H


class obj {
protected:
    int i = 100;

public:
    friend void setNum(obj &o);
    int getNum() {
        INFO("call obj::getNum() , value -> %d\n", i);
        return i;
    }

};

class obj_sub : public obj {

public:
    int getNum() {
        INFO("call obj_sub::getNum() , value -> %d\n", i);
        return i;
    }

};
#endif //C__OBJ_H
