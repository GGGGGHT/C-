//
// Created by 75685 on 2021/10/31.
//

#include "dynamic_array.h"
#include <iostream>

using namespace std;

int main() {
    // 未初始化的int
    // int *p = new int[42];
    // 初始化的int 值为0
    int *p = new int[42]();
    int a[] = {1, 2, 3};
    // error 不能对动态数组调用begin,end 也不能用范围for语句来处理动态数组中的元素
    // auto pb = begin(p), pe = end(p);
    // auto b = begin(a), e = end(a);
    // while (b != e) {
    // cout << *b++ << endl;
    // }
    cout << "size of int:  " << sizeof(int) << endl;
    for (int i = 0; i != 41; ++i) {
        cout << "index: " << i << ", value: " << *(p++) << ", memory: " << p++ << endl;
    }

    // 释放动态数组
    // delete p; p 必须指向一个动态分配的对象或为空
    // 当我们释放一个指向数组的指针时,空方括号对是必须的!
    delete[] p; // p必须指向一个动态分配的数组或为空 数组中的元素按逆序销毁,即最后一个元素首先被销毁

    typedef int arrT[42];
    int *pa = new arrT;
    // 不管外表如何，pa指向一个对象数组的首元素，而不是一个类型为arrT的单一对象。因此，在释放p时我们必须使用[]。
    delete[] pa;
}