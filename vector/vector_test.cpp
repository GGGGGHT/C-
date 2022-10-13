// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2022/8/3.
//

#include "vector_test.h"
#include <iostream>
#include <vector>

using namespace std;

class Obj1
{
public:
    Obj1()
    {
        cout << "Obj1()\n";
    }
    Obj1(const Obj1&)
    {
        cout << "Obj1(const Obj1&)\n";
    }
    Obj1(Obj1&&)
    {
        cout << "Obj1(Obj1&&)\n";
    }
};

class Obj2
{
public:
    Obj2()
    {
        cout << "Obj2()\n";
    }
    Obj2(const Obj2&)
    {
        cout << "Obj2(const Obj2&)\n";
    }
    Obj2(Obj2&&) noexcept
    {
        cout << "Obj2(Obj2&&)\n";
    }
};

int main()
{
    vector<Obj1> v1;
    v1.reserve(2);
    v1.emplace_back();
    v1.emplace_back();
    v1.emplace_back();

    vector<Obj2> v2;
    v2.reserve(2);
    v2.emplace_back();
    v2.emplace_back();
    v2.emplace_back();

}