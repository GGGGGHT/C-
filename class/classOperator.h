//
// Created by 75685 on 2021/10/31.
//

#ifndef C__CLASSOPERATOR_H
#define C__CLASSOPERATOR_H


class classOperator {

};

class Foo {
public :
    Foo(); // 默认构造函数

    Foo(const Foo &); // 如果一个构造函数的第一个参数是自身类类型的引用，且任何额外参数都有默认值，则此构造函数是拷贝构造函数。

    // 重载运算符本质上是函数，其名字由operator关键字后接表示要定义的运算符的符号组成。
    // 赋值运算符通常应该返回一个指向其左侧运算对象的引用。
    Foo &operator=(const Foo &); // 重载赋值运算符


    Foo(const Foo&) = delete; // 阻止拷贝
    Foo &operator=(const FOo &) = delete; // 阻止赋值
    // 当一个类未定义自己的析构函数时，编译器会为它定义一个合成析构函数。
    // 析构函数执行与构造函数相反的操作：构造函数初始化对象的非static数据成员，还可能做一些其他工作；析构函数释放对象使用的资源，并销毁对象的非static数据成员
    ~Foo() {
        // 成员是在析构函数体之后隐含的析构阶段中被销毁的
        // 在一个析构函数中，首先执行函数体，然后销毁成员。成员按初始化顺序的逆序销毁。
    }
};

class HasPtr {
  // 将swap定义为友元函数,使其可以访问HasPtr的数据成员
  friend void swap(HasPtr &, HasPtr &);

private:
  std::string *ps;
  int i;
};

// 为了优化代码,将其声明为内联函数
inline void HasPtr::swap(HasPtr &lhs, HasPtr &rhs) {
  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
}
#endif //C__CLASSOPERATOR_H
