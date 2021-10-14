#include <iostream>

using namespace std;

/**
 * 一个函数定义包括：
 * return_type function_name([param1,param2...]) {
 *  function_body
 * }
 *
 * 通过调用运算符来执行函数。 调用运算符的形式是一对圆括号，它作用于一个表达式，该表达式是函数或者指向函数的指针；
 * 圆括号之内是一个用逗号隔开的实参列表，我们用实参初始化函数的形参。调用表达戔类型就是函数的返回类型
 * @return
 */
void f1() {}

// 与c语言兼容 也可以使用void表示函数没有形参
void f2(void) { ; }

// 形参列表中的形参通常用逗号隔开 每个形参都需要一个声明符的声明，即使两个形参的类型一样，也必须把两个类型都写出来
// error
//int f3(int v1, v2) {}

int f4(int v1, int v2);

int f5(int, int);

size_t count_calls() {
    static size_t ctr;
    return ++ctr;
}

// 为函数传递一个数组时，实际上传递的是指向数组首元素的指针
void print(const int *);

void print(const int[]);

void print(const int[10]);
// 上述的三个函数是等价的

// 管理指针形参的三种方式
// 1. 使用标记指定数组长度
void print(const char *cp) {
    if (cp) {
        while (*cp)
            cout << *cp++;
    }
}

// 2. 使用标准库规范
void print(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg++;
    }
}

// 3. 显示传递一个表示数组大小的形参
void print(const int ia[], size_t size) {
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i];
    }
}

// 可变形参的函数
// 如果所有的实参类型相同，可以传递一个名为initializer_list的标准库类型，如果实参的类型不同，需要编写可变参数模板
void error_msg(initializer_list<string> il) {
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}
int main(int argc, char *argv[]) {
//    for (int i = 0; i != 10; ++i) {
//        cout << count_calls() << endl;
//    }

//    int n = 0;
//    int i = n;
//    i = 3;
//    cout << i << endl;

//    int n = 0, i = 42;
//    int *p = &n, *q = &i;
//    *p = 42;
//    p = q;
//    cout << *p << " " << p << " |||||" << *q << " " << q << endl;
    if (argc == 0) {
        return 0;
    }

    // 使用时实参时， 可选的实参从argv[1]开始 argv[0]保存程序的名字，而非用户输入
    string str;
    for (int i = 1; i != argc; ++i) {
//        cout << argv[i] << endl;
        str += argv[i];
    }

    cout << str << endl;

    cout << endl << endl;

    error_msg({"hello", "world", "ght"});
    return 0;
}