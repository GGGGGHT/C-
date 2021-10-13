#include <vector>
#include <iostream>

using namespace std;
using std::vector;

int main() {
    // 10 element
    vector<int> v;
    // 1 element
    // vector<int> v1{10};

//    for (int i = 0; i < 10; ++i) {
//        v.insert(i);
//    }
//
//    for (auto &c: v) {
//        cout << c << endl;
//    }

//    for (auto &c: v) {
//        cout << c << endl;
//    }
//    vector<string> s(10,"null");
//
//    for (auto &c: s) {
//        cout << c << endl;
//    }

    // add element to vector use push_back
//    for (int i = 0; i < 10; ++i) {
//        v.push_back(i);
//    }
//    for (auto &c: v) {
//        cout << c << endl;
//    }

    // C++标准要求应该能在动物埋高效快速地添加元素。因此没有必要在定义vector对象的时候敲定其大小。 事实上设置其大小可能性能更差，
    // 只有一种情况有例外，即所有的元素的值都一样！
    // 一旦元素的值有所不同，更有效的方法是先定义一个空的vector对象，再在运行时向其中添加具体值

    // important: 由于可以高效的向vector对象中添加元素，很多编程工作被极大简化了。然而需要格外注意的是必须要确保所写的循环正确无误
    // 如果循环体内有向vector对象添加元素的语句，则不能使用范围for循环
//    string world;
//    vector<string> text;
//    while (cin >> world) {
//        text.push_back(world);
//    }

    // ===============API================
    // v.empty()
    // v.size()
    // v.push_back(t) 向v的尾部添加t元素
    // v[n] 返回v中第n个位置的元素
    // == != > <
    // ===============API================

    vector<int> i{1, 2, 3, 4, 5};
    for (auto &t :i) {
        t *= t;
    }
    for (auto t :i) {
        cout << t << " ";
    }
    cout << endl;
    return 0;
}
