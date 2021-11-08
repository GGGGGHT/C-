//
// Created by 75685 on 2021/11/8.
//

#ifndef C__CLASSINHERITANCE_H
#define C__CLASSINHERITANCE_H

#include <iostream>

using namespace std;

class classInheritance {

};

class Quote {
public:
    Quote() = default;

    Quote(size_t i) : val(i) {

    }

    string isbn() const {
        return "quote";
    }

    // 虚函数 对于某些函数,基类希望它的派生类各自定义适合自身的版本,此时蕨类就将这些函数声明成虚函数. 类型Java中的抽象方法
    virtual double net_price(size_t n) const {
        return val * val;
    }

private:

    size_t val;
};

class Bulk_quote : public Quote { // 派生类必须通过使用类派生列表明确指出它是从哪些基类继承而来 C++支持多继承 Bulk_quote 继承了Quote
public:
    Bulk_quote() = default;

    Bulk_quote(size_t i) : val(i) {}

    string isbn() const {
        return "Bulk_quote";
    }

    // 派生类必须在其内部对所有重新定义的虚函数进行声明. override C++11
    double net_price(size_t n) const override {
        return val;
    }

private:
    size_t val;
};

#endif //C__CLASSINHERITANCE_H
