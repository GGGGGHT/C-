// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#include "dynamic_memory_test.h"

void allow(double *pvalue) {
    pvalue = new double;
    if (pvalue == nullptr) {
        INFO("alloc memory fail.");
        exit(1);
    }
}


int main() {
    double *pvalue = NULL; // 初始化为 null 的指针
//    pvalue = new double;// 为变量请求内存
    // 如果自由存储区已被用完，可能无法成功分配内存。所以建议检查 new 运算符是否返回 NULL 指针，并采取以下适当的操作：

//    allow(pvalue);
    pvalue = new double;
    *pvalue = 3.1415926;
//    INFO("value: \f\n", *pvalue);
    cout << *pvalue << endl;
    delete pvalue; // 释放 pvalue 所指向的内存
    return 0;
}