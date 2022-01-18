// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/10/30.
//
#include "calc.h"
#include <cassert>

int add(int i, int j)
{
    return i + j;
}

int sub(int i, int j)
{
    return i - j;
}



int main()
{
    // add test
    auto rst = add(1, 2);
    assert(rst == 3);
    auto rst2 = sub(10, 1);
    assert(rst2 == 9);
    // test1
    return 0;
}