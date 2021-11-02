//
// Created by autorun on 2021/11/2.
//

#include "quote_test.h"

int main() {
    int num = 10;
    int &num_snap = num;

    INFO("test source: %d target : %d\n", num, num_snap);

    num = 20;
    INFO("update test source: %d target : %d\n", num, num_snap);
    return 0;
}