// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#ifndef C__NAMESPACE_TEST_H
#include "../common/common.h"
#define C__NAMESPACE_TEST_H


class namespace_test {

};

namespace first_space {
    void func()
    {
        INFO("first space func call\n");
    }
}

namespace second_space {
    void func()
    {
        INFO("second space func call\n");
    }
}

namespace nbase {
    namespace n1 {
        int i = 10;
    }
    namespace n2 {
        int i = 100;
    }
}
#endif //C__NAMESPACE_TEST_H
