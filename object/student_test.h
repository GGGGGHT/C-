// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/2.
//
#ifndef C__STUDENT_TEST_H
#include "../common/common.h"
#define C__STUDENT_TEST_H


class student_test {

};

class Student
{
public:
    string stuName;
    int stuNum;

    void displayStudentInfo()
    {
//        INFO("student name: %s, id: %d\n", stuName, stuNum);
    cout << "student name: " << stuName << ", studentIdCard: " << stuNum << endl;
    }

    ~Student()
    {
        INFO("析构函数执行...%d\n", stuNum);
    }
};

#endif //C__STUDENT_TEST_H
