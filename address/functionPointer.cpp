// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
#include "iostream"
using namespace std;
/**
 * 函数指针
 * 函数指针指向函数而非对象。 和其他指针一样，函数指针指向某种特定类型。 函数的类型由它的返回类型和形参类型决定
 */
// 比较两个string对象的长度
bool lengthCompare(const string &, const string &);
// pf指向一个函数,该函数的是两个const string的引用,返回值是bool类型
//bool (*pf)(const string &, const string &);
int main() {
    auto pf = lengthCompare;
    string string1("abcd");
    string string2("abc");

    const string &ref1 = string1;
    const string &ref2 = string2;
    cout << pf(ref1, ref2) << endl;
}

bool lengthCompare(const string &s1, const string &s2) {
    return s1.size() > s2.size();
}