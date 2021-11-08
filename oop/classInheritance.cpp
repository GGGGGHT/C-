//
// Created by 75685 on 2021/11/8.
//

#include "classInheritance.h"

using namespace std;

/**
 *
 * @param os
 * @param item 因为item是基类Quote的一个引用,所以我们既能使用基类Quote的对象调用函数,也能使用派生类Bulk_quote的对象调用它
 * @param n
 * @return
 */
double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;

    return ret;
}

int main() {
    Quote basic(20);
    Bulk_quote bulk(20);
    print_total(cout, basic, 20);
    print_total(cout, bulk, 20);
}
