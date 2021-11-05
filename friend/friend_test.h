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
