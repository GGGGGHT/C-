// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#ifndef C__TEMPLATE_TEST_H
#include "../common/common.h"
#define C__TEMPLATE_TEST_H


template <typename T> inline T const& Max(T const& x, T const& y)
{
    return x > y ? x : y;
}

template <typename T> inline T const& echo(T const& x)
{
    return x;
}

//template <class T>
//class Stack {
//private:
//    vector<T> elems;     // 元素
//
//public:
//    void push(T const&);  // 入栈
//    void pop();               // 出栈
//    T top() const;            // 返回栈顶元素
//    bool empty() const{       // 如果为空则返回真。
//        return elems.empty();
//    }
//};
//
//template <class T>
//void Stack<T>::push (T const& elem)
//{
//    // 追加传入元素的副本
//    elems.push_back(elem);
//}
//
//template <class T>
//void Stack<T>::pop ()
//{
//    if (elems.empty()) {
//        throw out_of_range("Stack<>::pop(): empty stack");
//    }
//    // 删除最后一个元素
//    elems.pop_back();
//}
//
//template <class T>
//T Stack<T>::top () const
//{
//    if (elems.empty()) {
//        throw out_of_range("Stack<>::top(): empty stack");
//    }
//    // 返回最后一个元素的副本
//    return elems.back();
//}

#endif //C__TEMPLATE_TEST_H
