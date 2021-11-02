//
// Created by 75685 on 2021/10/31.
//

#ifndef C__CLASSOPERATOR_H
#define C__CLASSOPERATOR_H
#include <set>

using namespace std;
class classOperator {};

class Foo {
public:
  Foo(); // 默认构造函数

  Foo(const Foo
          &); // 如果一个构造函数的第一个参数是自身类类型的引用，且任何额外参数都有默认值，则此构造函数是拷贝构造函数。

  // 重载运算符本质上是函数，其名字由operator关键字后接表示要定义的运算符的符号组成。
  // 赋值运算符通常应该返回一个指向其左侧运算对象的引用。
  Foo &operator=(const Foo &); // 重载赋值运算符

  // Foo(const Foo &) = delete;            // 阻止拷贝
  // Foo &operator=(const Foo &) = delete; // 阻止赋值
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
inline void swap(HasPtr &lhs, HasPtr &rhs) {
  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
}
class Message;
class Folder {
  friend class Message;

public:
  void addMsg(Message &);
  void remMsg(Message &);
};

/**
 * 拷贝控制
 */
class Message {
  friend class Folder;
  friend void swap(Message &, Message &);

public:
  // explicit Message(const std::string &str = "") : content(str){};
  // 拷贝构造函数
  Message(const Message &);
  // 拷贝赋值运算符
  Message &operator=(const Message &);
  ~Message() { remove_from_Folders(); }

  void save(Folder &);
  void remove(Folder &);

private:
  // 实际消息文本
  string *content;
  // 包含本message的Folder
  set<Folder *> folders;
  void add_to_Folders(const Message &);
  void remove_from_Folders();
};

inline void swap(Message &lhs, Message &rhs) {
  using std::swap;
  for (auto f : lhs.folders) {
    f->remMsg(&lhs);
  }
  for (auto f : rhs.folders) {
    f->remMsg(&rhs);
  }

  swap(lhs.folders, rhs.folders);
  swap(lhs.content, rhs.content);
  for(auto f: lhs.folders) {
    f->addMsg(&lhs);
  }
  for(auto f: rhs.folders) {
    f->addMsg(&rhs);
  }
}
void Message::save(Folder &f) {
  folders.insert(&f);
  f.addMsg(this);
}

void Message::remove(Folder &f) {
  folders.erase(&f);
  f.remMsg(this);
}

void Message::add_to_Folders(const Message &m) {
  for (auto *f : folders)
    f->addMsg(this);
}

void Message::remove_from_Folders() {
  for (auto *f : folders)
    f->remMsg(this);
}

Message::Message(const Message &m) : content(m.content), folders(m.folders) {
  add_to_Folders(m);
}

Message &Message::operator=(const Message &rhs) {
  remove_from_Folders();
  content = rhs.content;
  folders = rhs.folders;
  add_to_Folders(rhs);

  return *this;
}

#endif // C__CLASSOPERATOR_H
