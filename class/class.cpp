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

    // 构造函数 C++11标准 生成默认的构造函数
    Sales_data() = default;

    // bookNo(s) 构造函数初始值列表 下同
    Sales_data(const string &s) : bookNo(s) {}

    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}

    Sales_data(istream &);
};

// Sales_data的非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);

ostream &print(ostream &, const Sales_data &);

istream &read(istream &, Sales_data);
// ===================定义抽象数据类型======================


// ===============构造函数===========
// 默认构造函数无数任务实参 如果我们的类没有显式地定义构造函数，那么编译器就会为我们隐式地定义一个默认构造函数
// 只有当类没有声明任何构造函数时，编译器才会自动地生成默认构造函数

// ===============构造函数===========

int main(int argc, char **argv) {
    return 0;
}