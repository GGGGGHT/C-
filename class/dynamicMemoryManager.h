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
 *
 *
 * 为了避免string的拷贝.定义了所谓的"移动构造函数"
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
  // 拷贝构造函数
  StrVec(const StrVec &s) {
    auto newData = alloc_n_copy(s.begin(), s.end());
    elements = newData.first;
    first_free = cap = newData.second;
  }

  StrVec &operator=(const StrVec &rhs) {
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;

    return *this;
  }                     // 拷贝赋值运算符
  ~StrVec() { free(); } // 析构函数

  void push_back(const std::string &str) {
    chk_n_alloc();

    alloc.construct(first_free++, str);
  }
  size_t size() const { return first_free - elements; }
  size_t capacity() const { return cap - elements; }
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
  void free() {
    if (elements) {
      for (auto p = first_free; p != elements;)
        alloc.destroy(--p);

      alloc.deallocate(elements, capacity());
    }
  }
  // 获得更多内存并拷贝已有元素
  void reallocate() {
    auto newCapacity = size() ? 2 * size() : 1;
    auto newData = alloc.allocate(newCapacity);
    auto desc = newData;
    auto elem = elements;

    for (decltype(size()) i = 0; i != size(); ++i) {
      alloc.construct(desc++, std::move(*elem++));
    }

    free();
    elements = newData;
    first_free = desc;
    cap = elements + newCapacity;
  }

  std::string *elements;
  std::string *first_free;
  std::string *cap;
};

std::pair<std::string *, std::string *>
StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
  // 分配 空间保存给定范围中的元素
  auto data = alloc.allocate(e - b);

  // 初始化并返回一个pair,该pair由data和uninitialized_copy的返回值构成
  return {data, uninitialized_copy(b, e, data)};
}
class dynamicMemoryManager {};

// 对象移动
// 在很多情况下,对象拷贝后就立即被销毁了,在这些情况下,移动而非拷贝对象会大幅度提升性能
// 重新分配内存的过程中,从旧内存将元素拷贝到新内存是不必要的,更好的方式是移动元素.

#endif //_DYNAMICMEMORYMANAGER_H_
