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
