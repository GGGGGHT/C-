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
    cout << "size of int:  " << sizeof (int) << endl;
    for (int i = 0; i != 41; ++i) {
        cout << "index: " << i << ", value: " <<  *(p++) << ", memory: " << p++ << endl;
    }
}