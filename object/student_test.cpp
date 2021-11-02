// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/2.
//

#include "student_test.h"

int main()
{

    Student stu;
    stu.stuNum = 10;
    stu.stuName = "helloWorld";
    stu.displayStudentInfo();

    Student* stu2 = new Student();
stu2->stuNum= 100;
stu2->stuName = "zhangsan";
stu2->displayStudentInfo();
delete stu2;
}