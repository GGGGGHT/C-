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