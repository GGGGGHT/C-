// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/9.
// 派生访问说明符对于 派生类的成员(及友元)能否访问其直接基类的成员没有影响.对基类成员的访问权限只与基类中访问说明符有关
// 派生访问说明符的目的是控制派生类用户(包括派生类的派生类在内)对于基类成员的访问权限

/**
 * 派生类向基类转换的可访问性
 *
 * 只有当派生类仅有地继承基类时,用户代码才能使用派生类向基类的转换;如果派生类继承基类的方式是受保护的或私有的,则用户代码不能使用该转换
 *
 * struct与class关键字唯一的差别就是默认成员访问说明符及默认派生访问说明符. struct默认是public继承, class默认是private继承
 */
#ifndef _VIRTUALFUNCTION_H_
#define _VIRTUALFUNCTION_H_
class virtualFunction {

};

/*class Base {
 public:
  void pub_mem ();
 protected:
  int prot_mem;
 private:
  char priv_mem;
};

struct Pub_Derv : public Base {
  int f() { return prot_mem; }

  // char g() {return priv_mem;} private成员对于派生类来说是不可访问的
};

struct Pirv_Derv: private Base{
  int f1() const{ return prot_mem; }
};*/
// class Sneaky : public Base {
//   friend void clobber (Sneaky &);
//   friend void clobber (Base &);
//   int j;
// };
//
// void clobber (Sneaky &s)
// { s.j = s.prot_mem = 0; }
// 派生类的成员或友元只能通过派生类对象来访问基类的受保护成员.派生类对于一个基类对象中的受保护成员没有任何访问特权
// error clobber不能访问base的protected成员
// void clobber(Base &b) { b.prot_mem = 0; }

#include <iostream>
#include "classInheritance.h"
#include <set>
#include <string>
#include <set>
#include <map>
#include <utility>
#include <cstddef>
#include <stdexcept>

using std::cout; using std::endl;
class Base {
 public:
  virtual int fcn ();
};

int Base::fcn ()
{
  cout << "Base::fcn()" << endl;
  return 0;
}

class D1 : public Base {
 public:
  int fcn (int);
  virtual void f2 ();
};
int D1::fcn (int)
{
  cout << "D1::fcn(int)" << endl;
  return 0;
}
void D1::f2 ()
{ cout << "D1::f2()" << endl; }

class D2 : public D1 {
 public:
  int fcn (int);
  int fcn ();
  void f2 ();
};

int D2::fcn (int)
{
  cout << "D2::fcn(int)" << endl;
  return 0;
}
int D2::fcn ()
{
  cout << "D2::fcn()" << endl;
  return 0;
}
void D2::f2 ()
{ cout << "D2::f2()" << endl; }

class Basket {
 public:
  void add_item (const std::shared_ptr<Quote> &sale)
  { items.insert (sale); }
  void add_item(const Quote& sale){
	items.insert (std::shared_ptr<Quote> (sale.clone ()));
  } // 拷贝给定的对象
  void add_item(Quote&& sale){
	items.insert (std::shared_ptr<Quote> (std::move (sale).clone ()));
  } // 移动给定的对象
  double total_receipt (std::ostream &) const;
 private:
  static bool compare (const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
  {
	return lhs->isbn () < rhs->isbn ();
  }

  std::multiset<std::shared_ptr<Quote>, decltype (compare) *> items{compare};
};

double Basket::total_receipt (std::ostream &os) const
{
  double sum = 0.0;
  for (auto iter = items.cbegin ();
	   iter != items.cend ();
	   iter = items.upper_bound (*iter))
	{
	  sum += (*iter)->net_price(items.count (*iter));
	}

	os << "Total Sale: " << sum << endl;

  return sum;
}
#endif //_VIRTUALFUNCTION_H_
