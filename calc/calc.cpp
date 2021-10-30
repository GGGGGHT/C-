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
    return 0;
}