//
// Created by 75685 on 2021/11/8.
//

#ifndef C__CLASSINHERITANCE_H
#define C__CLASSINHERITANCE_H

#include <iostream>

using namespace std;

class classInheritance {

};

/**
 * 基类必须将它的两种成员函数区分开来,一种是基类希望其派生类进行覆盖的函数;另一种是基类希望派生类直接继承而不要改变的函数
 * 对于前者,基类通常将其定义为虚函数.当我们使用指针或引用调用虚函数时,该调用将被动态绑定.根据所绑定的对象类型不同,执行的结果也不同
 *
 * 任何构造函数之外的非静态函数都可以是虚函数
 * 派生类可以继承定义在基类中的成员,但是派生类的成员函数不一定有权访问从基类继承而来的成员.
 * protected访问运算符可以使派生类有权访问该成员,同时禁止其他用户访问.
 */
class Quote {
 public:
  Quote () = default;

  Quote (string &book, double sales_price) : bookNo (book), price (sales_price)
  {}

  string isbn () const
  {
	return bookNo;
  }

  // 虚函数 对于某些函数,基类希望它的派生类各自定义适合自身的版本,此时蕨类就将这些函数声明成虚函数. 类型Java中的抽象方法
  virtual double net_price (size_t n) const
  {
	return n * price;
  }

  virtual ~Quote () = default; // 析构函数

 private:
  string bookNo; // 书籍的ISBN编号
 protected:
  double price = 0.0; // 代表普通状态下不打折的价格
};

class Bulk_quote : public Quote { // 派生类必须通过使用类派生列表明确指出它是从哪些基类继承而来 C++支持多继承 Bulk_quote 继承了Quote
 public:
  Bulk_quote () = default;

  Bulk_quote (size_t i) : val (i)
  {}

  string isbn () const
  {
	return "Bulk_quote";
  }

  // 派生类必须在其内部对所有重新定义的虚函数进行声明. override C++11
  double net_price (size_t n) const override
  {
	return val;
  }

 private:
  size_t val;
};

class NoDerived final { // 使用final关键字可以保证这个类不会被其他类所继承 不能作为基类

};
class Base{};
class Last final: Base {};
// class Bad: NoDerived { final类不可以被继承
//
// };
//
// class Bad2: Last {
//
// };
#endif //C__CLASSINHERITANCE_H
