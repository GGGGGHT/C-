#include<iostream>

using namespace std;

/**
 * 成员访问运算符
 * 点运算符 和 箭头运算符 都可以用于访问成员
 * 点运算符获取类对象的一个成员
 * 箭头运算符与点运算符有关，表达式ptr->mem 等价于 (*ptr).mem
 * 解引用运算符的优先级低于点运算符 所以执行解引用的运算的子表达式两端必须加上括号 如果没有括号，代码的含义就大不相同了。
 *
 * @return
 */
int main() {
    string s1 = "a string", *p = &s1;
    auto n = s1.size();     // 运行string对象s1的size成员
    n = (*p).size();        // 运行p所指向对象的size成员
    n = p->size();          // 等价于(*p).size()
    cout << n << endl;
    return 0;
}
