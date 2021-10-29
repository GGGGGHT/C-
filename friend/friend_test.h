// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/4.
//

#ifndef C__FRIEND_TEST_H
#include "../common/common.h"
#define C__FRIEND_TEST_H


class friendTest {
    friend void test1(friendTest &test);

private:
public:
    int getI()
    {
        return i;
    }
protected:
    int i;
};

void test1(friendTest &test) {
    test.i = 1001;
}
#endif //C__FRIEND_TEST_H
