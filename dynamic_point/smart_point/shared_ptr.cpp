//
// Created by autorun on 2021/11/1.
//

#include "shared_ptr.h"
#include <memory>
int main(int argc, char *argv[]) {
    shared_ptr<string> sPtr;

    printf("sizeOf: %lu", sizeof(sPtr));
    return 0;
}