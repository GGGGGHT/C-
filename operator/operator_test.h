// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/4.
//

#ifndef C__OPERATOR_TEST_H
#include "../common/common.h"
#define C__OPERATOR_TEST_H

class Operator {
public:
    int o_num;

public:
    Operator()
    {
    }

    // operator demo
    Operator operator-(const Operator &p) {
        Operator temp;
        temp.o_num = this->o_num - p.o_num;
        return temp;
    }
};

#endif //C__OPERATOR_TEST_H
