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
 */
#ifndef _VIRTUALFUNCTION_H_
#define _VIRTUALFUNCTION_H_

class virtualFunction {

};

class Base {
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
};
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
#endif //_VIRTUALFUNCTION_H_
