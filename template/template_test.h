// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#ifndef C__TEMPLATE_TEST_H
#include "../common/common.h"
#define C__TEMPLATE_TEST_H

template <typename T> inline T const& Max(T const& x, T const& y)
{
    return x > y ? x : y;
}

template <typename T> inline T const& echo(T const& x)
{
    return x;
}
#endif //C__TEMPLATE_TEST_H
