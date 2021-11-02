//
// Created by autorun on 2021/11/2.
//

#include "round_test.h"


int main()
{
    Round r1;
    r1.m_r = 10;
    INFO("圆的周长为: %f\n", r1.calculate());
    r1.setMc(10.1);
    INFO("mc value: %f\n", r1.getMc());
    return 0;
}