//
// Created by 75685 on 2021/11/14.
//

#include "tuple_test.h"
#include <iostream>
#include <tuple>
#include <vector>
#include <list>
/**
 * tuple类似pair
 * @return
 */
int main() {
    std::tuple<size_t,size_t,size_t> threeD;
    std::tuple<std::string, std::vector<double>, int, std::list<int>> someVal("constants", {3.14, 2.718}, 42,
                                                                              {0, 1, 2, 3, 4});
    // tuple<const char＊，int，double>
    auto item = std::make_tuple("0-999-123-X",3,20.00);
}