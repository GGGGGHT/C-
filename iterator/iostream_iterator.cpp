#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

/**
 * 从标准输入中读取int
 */
void readFromStandardIn() {
    istream_iterator<int> in_iter(cin); // 从cin读取int
    istream_iterator<int> eof;
    // 可以使用元素范围迭代器来构造vec
    vector<int> vec(in_iter, eof);
//    while (in_iter != eof) {
//        // 后置递增运算符读取流，返回迭代器的旧值
//        // 解引用迭代器，获得从流读取的前一个值
//        vec.push_back(*in_iter++);
//    }

    cout << "size: " << vec.size() << endl;
    cout << "==================" << endl;
    auto b = vec.cbegin(), e = vec.cend();
    while (b != e) {
        cout << *b++ << endl;
    }
}

/**
 * 使用输出流
 */
void writeToOstream() {
    vector<int> v{1, 2, 3};
    // out将类型为int的值写到输出流中，每个值 后面都输出一个c
    ostream_iterator<int> out(cout, " ");
    for (auto e: v) {
        // 每次向out赋值时，写操作就会被提交
        *out++ = e;
        // 运算符*与++实际上对out没有任何影响
        // out = e;
    }
    cout << endl;
}

/**
 * 反向迭代器
 * 反向迭代器就是在容器中从尾元素向首元素反向移动的迭代器。
 * 对于反向迭代器，递增（以及递减）操作的含义会颠倒过来。递增一个反向迭代器（++it）会移动到前一个元素；
 * 递减一个迭代器（--it）会移动到下一个元素。
 */
void reverseIterator() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto r_iter = v.crbegin(); r_iter != v.crend(); ++r_iter) {
        cout << *r_iter << endl;
    }
}

/**
 * istream_iterator 读取输入流
 * ostream_iterator 向一个输出流写数据
 *
 * 当创建一个流迭代器时，必须指定迭代器将要读写的对象类型。
 * @return
 */
int main() {
//    readFromStandardIn();
//    writeToOstream();
    reverseIterator();
}