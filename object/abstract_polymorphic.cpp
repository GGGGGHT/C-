// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
//
#include "abstract_polymorphic.h"
#include "../common/common.h"

int main()
{
    abstract_polymorphic* po1 = new impl1_polymorphic;
    po1->test();
    INFO("hello world\n");
}