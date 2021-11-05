//
// Created by autorun on 2021/11/4.
//

#include "friend_test.h"

int main()
{
//    friend_test t;
    friendTest t1;
//    t1.i = 500;
    test1(t1);
    INFO("value: %d\n", t1.getI());
}