// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/2.
//
/**
 * 动态内存管理类
 * 实现标准库vector类的一个简化版本,只用于string
 *
 *
 * |--------------------|--------------|
 * ^elements             ^first_free   ^cap
 * elements 指向分配的内存中的首地址
 * first_free 指向最后一个实际元素之后的位置
 * cap 指向分配的内存末尾的位置
 */

#ifndef _DYNAMICMEMORYMANAGER_H_
#define _DYNAMICMEMORYMANAGER_H_
#include <iostream>
#include <memory>
#include <utility>

using namespace std;
class StrVec {
public:
  StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr){};
  StrVec(const StrVec &); // 拷贝构造函数
  StrVec &operator=(const StrVec &); // 拷贝赋值运算符
  ~StrVec(); // 析构函数

  void push_back(const std::string&);
  size_t size()const { return first_free - elements; }
  size_t capacity()const { return cap - elements; }
  std::string *begin() const { return elements; }
  std::string *end() const { return first_free; }

private:
  // 使用allocator分配元素
  static allocator<std::string> alloc;
  // 校验容量
  void chk_n_alloc() {
    if (size() == capacity())
      reallocate();
  }
  std::pair<std::string *, std::string *> alloc_n_copy(const std::string *,
                                                       const std::string *);
  // 销毁元素并释放内存
  void free();
  // 获得更多内存并拷贝已有元素
  void reallocate();
  std::string *elements;
  std::string *first_free;
  std::string *cap;
};

class dynamicMemoryManager {};

#endif //_DYNAMICMEMORYMANAGER_H_
