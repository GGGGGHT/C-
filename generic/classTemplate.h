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
#include <memory>

/**
 * 类模板 编译器不能为类模板推断模板参数类型
 *
 * 类模板的名字不是一个类型名,类模板用来实例化类型,而一个实例化的类型问题包含模板参数的.
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

template <typename T>
void Blob<T>::check(size_type i, const std::string &msg) const {
  if (i >= data->size())
    throw std::out_of_range(msg);
}

template <typename T> T &Blob<T>::back() {
  check(0, "back on empty Blob");
  return data->back();
}

template <typename T> T &Blob<T>::operator[](size_type i) {
  check(i, "subscript out of range");

  return (*data)[i];
}

template <typename T> void Blob<T>::pop_back() {
  check(0, "pop back on empty Blob");
  data->pop_back();
}

// 构造函数
template <typename T>
Blob<T>::Blob(std::initializer_list<T> il)
    : data(std::make_shared<std::vector<T>>(il)) {}
#endif //_CLASSTEMPLATE_H_
