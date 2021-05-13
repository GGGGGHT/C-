//
// Created by Admin on 2021/5/10.
//

/**
 * <b>在对指针应用解除引用运算符之(*)之前。将指针初始化为一个确定的，适当的地址</b>
 * <b>指针变量+1后，其增加的值等于指向的类型占用的字节数</b>
 */
#include "address.h"
#include "iostream"

using namespace std;

int main() {
    int donuts = 6;
    double cpus = 4.5;

//    cout << "dounuts value = " << donuts << " and dounts address = " << &donuts << endl;
//    cout << "cpus value = " << cpus << " and dounts address = " << &cpus << endl;

//    int updates = 6;
//    int * p_updates;
//    p_updates = &updates;
//
//    cout << "Values: updates = " << updates;
//    cout << ", *p_updates = " << *p_updates << endl;
//
//    cout << "Address: &updates = " << &updates;
//    cout << ", p_updates = " << p_updates << endl;
//
//    *p_updates = *p_updates + 1;
//    cout << "Now updates = " << updates << endl;
//    cout << "sizeof  p_updates: " << sizeof(p_updates) << endl;
//    cout << sizeof(int);
//
//    int higgens = 5;
//    int *pt = &higgens;
//    cout << endl;
//    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
//    cout << "Value of *pt = " << *pt << "; Value of pt= " << pt << endl;
//
//    // 使用new分配内存
//    int* pInt = new int;
//    cout << "Value of pInt = " << *pInt << "; Address of pInt = " << pInt << endl;

//    int nights = 1001;
//    int *p = new int;
//    *p = 1001;
//
//    cout << "nights values = " << nights << ": location " << &nights << endl;
//    cout << "int " << "value = " << *p << ": location = " << p << endl;
//    double *pd = new double;
//    *pd = 10000.1;
//    cout << "double value = " << *pd << ": location = " << pd << endl;
//    cout << "location of pointer pd: " << &pd << endl;
//    cout << ": size of *pd = " << sizeof *pd << endl;
//    cout << "location of pointer p: " << &p << endl;
//    cout << ": size of *p = " << sizeof *p << endl;
//
//    // free memory
//    delete pd;
//
//    // 只能delete通过new分配的内存
//    int i = 3;
//    int *pInt = &i;
    // not allow
    // delete pInt;

    // 使用new创建动态数组
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "now p3[0] is " << p3[0] << ".\n";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;
    // 释放内存
    delete[] p3;


    // add pntrs
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "pw = " << pw << ", *pw = " << *pw << endl; // +8
    cout << "add 1 to the ps pointer: \n";

}