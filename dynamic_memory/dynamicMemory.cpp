// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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
 * 智能指针陷阱
 * 1. 不使用相同的内置指针值初始化多个智能指针
 * 2. 不delete get()返回的指针
 * 3. 不使用get()初始化或reset另一个智能指针
 * 4. 如果使用get()返回的指针,雇当最后一个对应的智能指针销毁后,你的指针就变为无效了
 * 5. 如果智能指针管理的资源不是new分配的内存,需要传递给它一个删除器
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
	shared_ptr<string> p1 = make_shared<string>(10, 'A'); // shared_ptr 可以指向string
	// shared_ptr<std::vector<int>> p2; // shared_ptr 可以指向int的vector
	if (p1 && p1->empty()) {
		*p1 = "hi"; // 如果p1指向一个空string,解引用p1,将一个新值赋于string
	}
	cout << "p1: " << *p1 << endl;

}

/**
 * 直接管理内存
 * hello world
 * C++定义了两个去处符来分配和释放动态内存. 运算符new分配内存,delete释放new分配的内存
 * 使用new delete管理动态内存存在三个常见问题:
 * 1. 忘记delete内存.忘记释放动态内存会导致内存泄漏问题 因为这种内存永远不可能被归还给自由空间了.
 * 2. 使用已经释放掉的对象.
 * 3. 同一块内存释放两次.
 *
 *
 * shared_ptr 和 new 结合
 * 默认情况下,一个用来初始化智能指针的普通指针必须指向动态内存,因为智能指针默认使用delete释放它所关联的对象.
 * 使用一个内置指针来访问一个智能指针所负责的对象是很危险的.
 */
void dynamic_mamager() {
	// 如果不初始化一个智能指针,它就会被初始化为一个空指针
	// shared_ptr<double> p1; // shared_ptr可以指向一个double
	// 直接初始化
	shared_ptr<int> p(new int(42)); // p2 指向一个值为42的int

	// shared_ptr<int> p3 = new int(1024); // 错误: 必须使用直接初始化形式
	int *q = p.get();
	{
		shared_ptr<int>(q);
		// cout << "q: " << q << endl;
	}
	int foo = *p;
	cout << "foo: " << foo << endl;

	// 使用reset来将一个新的指针赋予shared_ptr
	// p = new int(1024); 错误 不能将一个指针赋予shared_ptr
	p.reset(new int(1024)); // 正确
	if (!p.unique()) {
		p.reset(new int(*p));
	}

}

void exception_in_method() {
	shared_ptr<int> sp(new int(42));
	// throw exception
	int *ip = new int(42);
	// throw exception
	// 如果在 new 与 delete之间发生异常,且异常未在方法中被捕获,则内存永远不会被释放了.
	delete ip;
} // 函数结束时sp自动释放内存

int main() {
	// use_shared_ptr();
	// sharedData();
	/*StrBlob b1;
	{
		StrBlob b2 = {"a", "an", "the"};
		b1 = b2;
		b2.push_back("about");

		cout << "b2: " << b2.size() << endl;
	}
	cout << "b1: " << b1.size() << endl;

	const string *pcs = new const string;

	cout << *pcs << endl;

	int *p1 = new int; // 如果分配失败,new抛出std::bad_alloc
	int *p2 = new(nothrow)int; // 如果分配失败,new返回一个空指针  定位new

	// 释放动态内存
	delete p1; // 必须指向一个动态分配的对象或是一个空指针
	delete p2;

	int i, *pi1 = &i, *pi2 = nullptr;
	double *pd = new double(33), *pd2 = pd;
	// delete i; // 错误 i不是一个指针
	delete pi1; // 未定义 pi1指向一个局部变量
	delete pd; // 正确
	delete pd2; // 未定义 pd2指向的内存已经释放
	delete pi2; // 正确*/

	dynamic_mamager();
}
