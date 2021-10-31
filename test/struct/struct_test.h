// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
//
// Created by autorun on 2021/10/31.
//

#include <iostream>
using namespace std;
#include <string>

#ifndef C__STRUCT_TEST_H
#define C__STRUCT_TEST_H


class struct_test
{

};


struct Student
{
    string name;

    int age;

    int score;
} s5, s6;

void printStu(Student* stu);
void printStu(Student stu);
void printStu2(Student stu)
{
    cout << stu.score << "\t" << stu.age << "\t" << stu.name << endl;
}

#endif //C__STRUCT_TEST_H
