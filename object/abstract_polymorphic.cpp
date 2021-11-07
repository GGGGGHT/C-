//
// Created by autorun on 2021/11/8.
//

#include "abstract_polymorphic.h"

int main() {

    abstract_polymorphic* po1 = new impl1_polymorphic;
    po1->test();
}