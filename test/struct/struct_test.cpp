// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/10/31.
//

#include "struct_test.h"

#include <iostream>
#include <string>
using namespace std;


void printStu(Student* stu)
{
    cout << stu->score << "\t" << stu->age << "\t" << stu->name << endl;
}

void printStu(Student stu)
{
    cout << stu.score << "\t" << stu.age << "\t" << stu.name << endl;
}

int main()
{
    // 创建学生 1
    struct Student stu1;
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 87;

    printStu(stu1);
    // 创建学生 2
    Student stu2 = {"李四", 22, 98};
    printStu(stu2);

    // 创建学生 3
    // refer struct s5, s6
    s5.name = "王五";
    s5.age = 66;
    s5.score = 77;
    printStu(s5);
    return 0;
}