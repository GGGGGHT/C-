//
// Created by 75685 on 2021/10/31.
//

#include "dynamic_array.h"
#include <iostream>
#include <memory>
#include <vector>

#define  n (x+1)
using namespace std;

void d() {
    int x = 1;
    printf("%d\n", n);
}

int x = 1;

void c() {
    printf("%d\n", n);
}


int main() {
    // 未初始化的int
    // int *p = new int[42];
    // 初始化的int 值为0
    /*int *p = new int[42]();
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
    delete[] pa;*/


//    std::allocator<string> alloc;
//    auto *sp = alloc.allocate(3);
//    auto sq = sp;
//    alloc.construct(sq++, "a");
//    alloc.construct(sq++, 10, 'h');
//    alloc.construct(sq++, "hi");
//    for (int i = 0; i != 3; ++i) {
//        cout << *sp++ << endl;
//    }
//
//    while (sq != sp) {
//        alloc.destroy(--sq);
//    }
//    // alloc.deallocate(sq, 3); // 释放内存
//
//    std::vector<int> v = {1, 2, 3, 4, 5};
//    allocator<int> ia;
//    auto ip = ia.allocate(v.size() * 2);
//    auto iq = uninitialized_copy(v.cbegin(), v.cend(), ip);
//    uninitialized_fill_n(iq, v.size(), 42);
//    auto pp = ip;
//    for (int i = 0; i != 2 * v.size(); ++i) {
//        cout << *pp++ << endl;
//    }
//
//    // 指针数组
//    int *ptr[3];
//    // ptr声明了一个数组,由3个整数指针组成 ptr每个元素都是一个指向一个int值的指针
//    int arr[3] = {1, 2, 3};
//    for (int i = 0; i != 3; i++) {
//        ptr[i] = &arr[i];
//    }
//
//    for (int i = 0; i != 3; i++) {
//        printf("value of arr[%d] = %d\n", i, *ptr[i]);
//    }
    int a = 1;
    int b = 1;
    {
        int b = 2;
        {
            int a = 3;
            // 3 2
            cout << a << ' ' << b << endl;
        }
        {
            int b = 4;
            // 1 4
            cout << a << ' ' << b << endl;
        }
        // 1 2
        cout << a << ' ' << b << endl;
    }
    // 1 1
    cout << a << ' ' << b << endl;

    d();
    c();
}

