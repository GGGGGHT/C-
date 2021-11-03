// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/3.
//
#ifndef C__INIT_TABLE_H

#include "../common/common.h"

#define C__INIT_TABLE_H


class init_table {

};

class Person {
    int m_a;
    int m_b;
    int m_c;

public:
    //初始化列表语法
    Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {

    }

    void display() {
        INFO("m_a: %d, m_b: %d, m_c: %d\n", m_a, m_b, m_c);
    }
};

#endif //C__INIT_TABLE_H
