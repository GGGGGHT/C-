// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#ifndef C__DYNAMIC_MEMORY_TEST_H
#include "../common/common.h"
#define C__DYNAMIC_MEMORY_TEST_H


class dynamic_memory_test {

};

class Box
{
public:
    Box()
    {
        INFO("构造函数被调用\n");
    }

    ~Box()
    {
        INFO("析构函数被调用\n");
    }
};

#endif //C__DYNAMIC_MEMORY_TEST_H
