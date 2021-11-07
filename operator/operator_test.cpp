// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
//
// Created by autorun on 2021/11/4.
//

#include "operator_test.h"

int main() {
    Operator *op = new Operator();
    op->o_num = 1000;

    Operator *op2 = new Operator();
    op2->o_num = 500;
    Operator *op3 = op - op2;
    INFO("op3 value -> %d\n", op3->o_num);
}