// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by 75685 on 2021/11/8.
//

/**
 * 派生类初始化时,首先初始化基类部分,然后按照声明的顺序依次初始化派生类的成员
 *
 * 派生类的作用域嵌套在基类的作用之内. 对于派生类的一个成员来说,它使用派生类成员的方式与使用基类成员的方式相同 .
 *
 * 如果某个类需要被作用于基类,则该类必须已经定义而非仅仅声明
 */
#include "classInheritance.h"

using namespace std;

/**
 *
 * @param os
 * @param item 因为item是基类Quote的一个引用,所以我们既能使用基类Quote的对象调用函数,也能使用派生类Bulk_quote的对象调用它
 * @param n
 * @return
 */
double print_total (ostream &os, const Quote &item, size_t n)
{
  double ret = item.net_price (n);
  os << "ISBN: " << item.isbn () << " # sold: " << n << " total due: " << ret << endl;

  return ret;
}

int main ()
{
  Quote basic;
  Bulk_quote bulk;
  print_total (cout, basic, 20);
  print_total (cout, bulk, 20);
  // 可以把派生类的对象当成基类对象来使用,也能将基类的指针或引用绑定到派生类对象中的基类部分上 派生类到基类的类型转换.
  Quote *p = &basic; // p指向quote对象
  p = &bulk;		 // p指向bulk的Quote部分
  Quote &r = bulk;   // r绑定到bulk的Quote部分
}
