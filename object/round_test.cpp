// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
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