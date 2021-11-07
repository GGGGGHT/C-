// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/3.
//

#ifndef _OPERATOROVERRIDE_H_
#define _OPERATOROVERRIDE_H_

#include <iostream>

class operatorOverride {
};

/**
 * 类型转换运算符
 */
class SmallInt {
public:
    SmallInt(int i = 0) : val(i) {
        if (i < 0 || i > 255) {
            throw std::out_of_range("Bad SmallInt value");
        }
    }

    operator int() const { return val; }

private:
    std::size_t val;
};

#endif //_OPERATOROVERRIDE_H_
