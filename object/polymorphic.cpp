// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/7.
//
#include "polymorphic.h"

/**
 * 多态提交
 * @return
 */
int main()
{
    Dog dog;
    Cat cat;
    doSpeak(dog);
    doSpeak(cat);
    Animal am;
    doSpeak(am);
    return 0;
}