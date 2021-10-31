//
// Created by autorun on 2021/10/31.
//

#include "struct_array_test.h"
#include <iostream>
#include "struct_test.h"

int main() {
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