// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/9.
//

#include "virtualFunction.h"

int main ()
{
  Base bobj;
  D1 d1obj;
  D2 d2obj;

  Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
  bp1->fcn (); // 虚调用Base::fcn
  bp2->fcn (); // 虚调用Base::fcn 真实类型是D1 但由于没有覆盖无参fcn 所以调用Base
  bp3->fcn (); // 虚调用D2::fcn

  D1 *d1p = &d1obj;
  D2 *d2p = &d2obj;
  // bp2->f2(); Base没有f2成员
  d1p->f2 ();
  d2p->f2 ();

  Base *p1 = &d2obj;
  D1 *p2 = &d2obj;
  D2 *p3 = &d2obj;
  // p1->fcn (42); Base中没有接受一个int的fcn
  p2->fcn (42);
  p3->fcn (42);

}