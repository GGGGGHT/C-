//
// Created by Admin on 2021/10/27.
//
#include <iostream>
#include <memory>
#include <vector>
#include "dynamicMemory.h"

/**
 * 动态内存与智能指针
 * C++支持动态分配对象.动态分配的对象的生存其与它们在哪里创建是无关的,只有当显式地被释放时,这些对象才会销毁
 * 标准库中定义了两个智能指针类型来管理动态分配的对象,当一个对象应该被释放时,指向它的智能指针可以确保自动地释放它.
 *
 * 静态内存用来保存局部static对象,类static数据成员以及定义在任何函数之外的变量.
 * 栈内存用来保存定义在函数内的非static对象.
 * 分配在静态或栈内存中的对象由编译器自动创建和销毁
 * 栈对象,公在其定义的程序块运行时才存在
 * static对象在使用之前分配,在程序结束时销毁
 * @return
 */


/**
 * 在C++中,动态内存的管理是通过一对运算符来完成
 * new: 在动态内存中为对象分配空间并返回一个指向该对象的指针
 * delete: 接受一个动态对象的指针,销毁该对象,并释放与之关联的内存.
 *
 * 智能指针:
 * 智能指针的行为类似常规指针,重要的区别是它负责自动释放所指向的对象. 三种类型都定义在头文件memory中
 * shared_ptr 允许多个指针指向同一个对象
 * unique_ptr 独占所指向的对象
 * weak_ptr 弱引用,指向shared_ptr所管理的对象.
 *
 * 默认初始化的智能指针中保存着一个空指针.
 * make_shared<T>(args) 返回一个shared_ptr,指向一个动态分配的类型为T的对象.使用args初始化此对象
 */
using namespace std;
/**
 * 使用动态内存的一个常见原因是允许多个对象共享相同的状态
 * 程序使用动态内存的原因:
 * 1. 程序不知道自己需要使用多少对象 (容器)
 * 2. 程序不知道所需对象的准确类型
 * 3. 程序需要在多个对象间共享数据
 */
// 程序需要在多个对象间共享数据
void sharedData() {
	// 拷贝一个vector时,原vector和副本vector中的元素是相互分离的.
	vector<string> v1;
	{ // 新作用域
		vector<string> v2 = {"a", "an", "the"};
		v1 = v2; // 从v2拷贝元素到v1中
	} // v2被销毁,其中元素也被销毁

	// v1有三个元素,是原来v2中元素的拷贝
	auto cb = v1.cbegin(), ce = v1.cend();
	while (cb != ce) {
		cout << *cb++ << endl;
	}
}

void use_shared_ptr() {
	shared_ptr<string> p1 =  make_shared<string>(10,'A'); // shared_ptr 可以指向string
	// shared_ptr<std::vector<int>> p2; // shared_ptr 可以指向int的vector
	if (p1 && p1->empty()) {
		*p1 = "hi"; // 如果p1指向一个空string,解引用p1,将一个新值赋于string
	}
	cout << "p1: " << *p1 << endl;

}

int main() {
	// use_shared_ptr();
	sharedData();
}
