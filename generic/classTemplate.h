// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/11.
//

#ifndef _CLASSTEMPLATE_H_
#define _CLASSTEMPLATE_H_
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

/**
 * 类模板 编译器不能为类模板推断模板参数类型
 */
class classTemplate {};

template <class T> class Blob {
public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type;
  Blob() = default;
  Blob(std::initializer_list<T> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(T &&t) { data->push_back(std::move(t)); }
  void push_back(const T &t) { data->push_back(t); }
  void pop_back();

  T &back();
  T &operator[](size_type i);

private:
  std::shared_ptr<std::vector<T>> data;
  void check(size_type i, const std::string &msg) const;
};
#endif //_CLASSTEMPLATE_H_
