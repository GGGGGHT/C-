// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/2.
//

#include "quote_test.h"

/**
 * 引用相关
 * 1. 引用必须初始化
 * 2. 引用初始化后不能修改
 *
 *
 * --------------------------
 * 引用本质是指针常量
 * case: ->
 *      int a = 10;
 *      相当于转换为int* const qa = a; 指针的指向不能修改，这也就可以解释为什么引用的地址不能被修改
 *      int &qa = a;
 *
 * @return
 */
int main() {
    int num = 10;
    int &num_snap = num;

    INFO("test source: %d target : %d\n", num, num_snap);

    num = 20;
    INFO("update test source: %d target : %d\n", num, num_snap);

    // int &quote_snap; // error: declaration of reference variable 'quote_snap' requires an initializer

    int &quote_snap = num_snap;
    INFO("update test source: %d target : %d quote_snap: %d \n", num, num_snap, quote_snap);

    int new_num = 30;
    // 赋值操作，并非修改应用别名
    quote_snap = new_num;
    INFO("update test source: %d target : %d quote_snap: %d \n", num, num_snap, quote_snap);

//    int &q_new_num = new_num;
//    int* p_new_num = &new_num;
// build fail.
//    q_new_num = &p_new_num;
    return 0;
}