#include <iostream>

/**
 * 类的基本思想是 数据抽象 和 封装。
 * 数据抽象是一种依赖于接口和实现分离的编程技术
 * 类的接口包括用户所能执行的操作；类的实现则包括类的数据成员、负责接口实现的函数体以及定义类所需的各种私有函数。
 */
using namespace std;

// ===================定义抽象数据类型======================
struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    // 关于sales_data对象的操作
    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;
};

// Sales_data的非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data);
// ===================定义抽象数据类型======================


// ===============定义类相关的非成员函数===========

// ===============定义类相关的非成员函数===========

int main(int argc, char **argv) {
    return 0;
}