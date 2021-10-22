#include <vector>
#include <iostream>
#include <cstring>

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
//    for (auto t :i) {
//        cout << t << " ";
//    }
//    cout << endl;
//    for (decltype(i.size()) t = 0; t < i.size(); t++) {
//        cout << i[t] << " ";
//    }
//    cout << endl;

    // error 只能对确知已存在的元素执行下标操作 试图用下标的形式去访问一个不存在的元素将引发错误， 这种错误不会被编译器发现，而是在运行时产生一个不可预知的值。
    // 通过下标访问不存在的元素的行为非常常见，而且会产生很严重的后果，所谓的缓冲区溢出指的就是这类错误。
    // vector<int> ivec;
    // for (decltype(ivec.size()) t = 0; t != 10; t++) {
    // ivec[t] = t;
    // }

    // 迭代器 b表示i的第一个元素 e表示i尾元素的下一位置
//    auto b = i.begin(), e = i.end();
//    if (b == e) {
//        cout << "i is empty" << endl;
//    }

    // C++中会对for循环中使用 != 而非 >
//    do {/
//        cout << *b << endl;
//    } while (++b != e);

//    string text = "hello, how are you!";
//    cout << "text length = " << text.end() - text.cbegin() <<  text.size() << endl;
//    for (auto it = text.cbegin();
//         it < text.cend() /*&& !it->empty()*/;
//         it += 2) {
//        cout << *it << "";
//    }

//    string nums[] = {"one", "two", "three"};
//    auto p = &nums[0];
//    cout << p << endl;
//    auto b = begin(nums);
//    auto e = end(nums);
//    cout << *e << endl;
//
//    while (b != e) {
//        cout << *b << endl;
//        ++b;
//    }

//    char ca[]{'C','+','+'};
//    cout << strlen(ca) << endl;
    int int_arr[] {1,2,3,4,5};
    vector<int> ivec(begin(int_arr), end(int_arr));
    auto b = ivec.begin(), e = ivec.end();
    while (b != e) {
        cout << *b << endl;
        ++b;
    }

    cout << endl;
    vector<int> sybvec(int_arr + 1, int_arr + 2);
    auto bs = sybvec.begin(), es = sybvec.end();
    while (bs != es) {
        cout << *bs << endl;
        ++bs;
    }

    vector<int> ivec1;
    // size = 0 capacity = 0(依赖于具体实现)
	cout << "ivec1: size: " << ivec1.size() << ", capacity: " << ivec1.capacity() << endl;
	for (decltype(ivec1.size()) ix = 0; ix != 24; ++ix) {
		ivec1.push_back(ix);
	}
	// size = 24 capacity >= 24
	// |------------------------|-------------|
	//               ivec1.size()           ivec1.capacity()
	cout << "ivec1: size: " << ivec1.size() << ", capacity: " << ivec1.capacity() << endl;

	// 将capacity至少设定为50 可以会更大 具体依赖于标准库实现
	ivec1.reserve(50);
	cout << "ivec1: size: " << ivec1.size() << ", capacity: " << ivec1.capacity() << endl;
	while (ivec1.capacity() != ivec1.size()) {
		ivec1.push_back(0);
	}
	// 由于只使用了预留空间,因此没有必要重新分配空间
	cout << "ivec1: size: " << ivec1.size() << ", capacity: " << ivec1.capacity() << endl;

	ivec1.push_back(0);
	// 再添加一个元素后,vector 必须重新分配空间 capacity 每次分配内存空间时将当前容量翻倍
	cout << "ivec1: size: " << ivec1.size() << ", capacity: " << ivec1.capacity() << endl;

	// 调用shrink_to_fit来将 vector 超出当前大小的多余内存退回给系统 因为size = cap == 51
	// 该方法只是一个请求,标准库并不保证退还内存
	ivec1.shrink_to_fit();
	cout << "ivec1: size: " << ivec1.size() << ", capacity: " << ivec1.capacity() << endl;
    return 0;
}
