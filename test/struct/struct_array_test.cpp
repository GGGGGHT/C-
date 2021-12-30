// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/10/31.
//

#include "struct_array_test.h"
#include "struct_test.h"

int main()
{
    /*struct*/
    Student stuArray[3] = {
            {"张三", 15, 99},
            {"李四", 66, 23},
            {"王五", 77, 77}
    };

    cout << "下标为2的学生姓名为: " << stuArray[2].name << endl;


    cout << "count -> " << sizeof(stuArray) / sizeof(stuArray[0]) << endl;

    int len = sizeof(stuArray) / sizeof(stuArray[0]);
    printStu2(stuArray[1]);
    for (int i = 0; i < len; ++i) {
        printStu2(stuArray[i]);
    }
    return 0;
}