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

class operator_test {

};

class SumOperator {

public:
    int num;

    SumOperator operator+(const SumOperator &opt) {
        SumOperator temp;
        temp.num = opt.num + num;
        return temp;
    }
};

class NewOperator {
public:
    string text;


    void *operator new(size_t size) {
        void *nopt = ::new NewOperator();
        NewOperator* nop = (*NewOperator)nopt;
        nop->text = "hello new Operator";
//        nopt->text = "hello new Operator";
        return nopt;
    }
};

#endif //C__OPERATOR_TEST_H
