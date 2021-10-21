// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/3.
//
#ifndef C__PERSON_TEST_H
#include "../common/common.h"
#define C__PERSON_TEST_H

class Person {
private:
    double money;

protected:
    int carId;

public:
    string name;

public:
    void showName() {
        cout << "name is : " << name << endl;
    }

    void setMoney(double money) {
        this->money = money;
    }

    void setCarId(int carId) {
        this->carId = carId;
    }
protected:
    void showCarId() {
        cout << "carId is : " << carId << endl;
    }

    void showMoney() {
        cout << "money is : " << money << endl;
    }
};

// 继承测试。protected 在继承关系中可以访问
class Student : public Person {
public:
    void test() {
        carId = 101;
        showCarId();
    }
};

#endif //C__PERSON_TEST_H
