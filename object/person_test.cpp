// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/3.
//

#include "person_test.h"

struct Student2 {

};

int main()
{
    Student s1;
    s1.setCarId(100);
    s1.setMoney(100.1);
    s1.test();
    Student2 st2;
    INFO("address %x\n", st2);
}