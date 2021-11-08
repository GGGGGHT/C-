// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#include "dynamic_memory_test.h"

int main() {
    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;// 为变量请求内存
    if (!(pvalue = new double ))
    {
        INFO("alloc memory fail.");
        exit(1);
    }
    delete pvalue;
    return 0;
}