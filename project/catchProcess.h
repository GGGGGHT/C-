// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/16.
//

#ifndef _CATCHPROCESS_H_
#define _CATCHPROCESS_H_
#include <iostream>
class catchProcess {
  /**
   * try语句块与构造函数
   */
  catchProcess() try : i(0) {

  } catch (const std::bad_alloc &e) {
    throw;
  }

private:
  int i;
};

#endif //_CATCHPROCESS_H_
