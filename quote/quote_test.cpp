//
// Created by autorun on 2021/11/2.
//

#include "quote_test.h"

/**
 * 引用相关
 * 1. 引用必须初始化
 * 2. 引用初始化后不能修改
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

    return 0;
}