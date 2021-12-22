// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/1.
//

#include "shared_ptr.h"
#include <memory>

int main(int argc, char *argv[]) {
    shared_ptr<string> sPtr;

    printf("sizeOf: %lu \n", sizeof(sPtr));

//    if (sPtr && sPtr->empty()) {
//        *sPtr = "hi";
//    }
//
//    printf("%s\n", sPtr.get());
    sPtr = make_shared<string>("hello world!");
    cout << sPtr << endl;
    cout << &sPtr << endl;
    cout << *sPtr << endl;
    return 0;
}