// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by autorun on 2021/11/4.
//

#include "operator_test.h"

int main() {
    SumOperator opt1;
    opt1.num = 101;
    SumOperator opt2;
    opt2.num = 202;

    SumOperator rstOpt = opt1 + opt2;
    INFO("result: %d\n", rstOpt.num);
    return 0;
}