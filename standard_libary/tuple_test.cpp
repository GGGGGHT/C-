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
    using namespace std;
    auto book = get<0>(item);
    auto cnt = get<1>(item);
    auto price = get<2>(item);
    std::cout << book << std::endl;
    std::cout << cnt << std::endl;
    std::cout << price << std::endl;
    get<2>(item) *= 0.8;
    std::cout << get<2>(item) << std::endl;
    // trans是item的类型
    typedef decltype(item) trans;
    // 返回trans类型对象中成员的数量
    size_t sz = tuple_size<trans>::value;
    cout << sz << endl;
    tuple_element<1, trans>::type cnt1 = get<1>(item);
    cout << cnt1 << endl;
}