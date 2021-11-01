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