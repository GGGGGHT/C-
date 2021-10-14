#include<iostream>
#include <vector>
using namespace std;

/**
 * 成员访问运算符
 * 点运算符 和 箭头运算符 都可以用于访问成员
 * 点运算符获取类对象的一个成员
 * 箭头运算符与点运算符有关，表达式ptr->mem 等价于 (*ptr).mem
 * 箭头运算符作用于一个指针类型的运算对象，结果是一个左值
 * 点运算符分成两种情况：如果成员所属的对象是左值，那么结果是左值，反之，如果成员所属的对象是右值，那么结果是右值
 *
 * 解引用运算符的优先级低于点运算符 所以执行解引用的运算的子表达式两端必须加上括号 如果没有括号，代码的含义就大不相同了。
 * eg:
 * *p.size(); // 运行p的size成员，然后解引用size的结果  p本身是一个指针，它没有名为size的成员 所以编译时会报错
 * @return
 */
int main() {
    string s1 = "a string", *p = &s1;
    auto n = s1.size();     // 运行string对象s1的size成员
    n = (*p).size();        // 运行p所指向对象的size成员
    n = p->size();          // 等价于(*p).size()
//    cout << n << endl;

    vector<string> v{"1","2","3"};
    auto b = v.begin(), e = v.end();
    while (b != e) {
        cout << "----start----" << endl;
//        cout << *b++ << endl;
//        cout << (*b)++ << endl; // false
//        cout << *b.empty() << endl;  // false
//        cout << b->empty() << endl; // true
//        cout << ++*b << endl; // false
        cout << b++->empty() << endl;
        cout << "----end----" << endl;
    }
    return 0;
}
