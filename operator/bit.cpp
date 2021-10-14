#include<iostream>
#include <vector>

using namespace std;

/**
 * 位运算符 | sizeof
 *
 * sizeof运算符返回一条表达式或一个类型名字所占的字节数，sizeof运算符满足右结合侓，其所得的值是一个size_t类型的常量表达式
 * eg:
 *  sizeof (type)
 *  sizeof expr
 * @return
 */
int main() {
    struct Sales_data {
        double revenue;
        unsigned units_sold;
        std::string bookNo;
    };

    Sales_data data, *p;
    // 对引用类型执行sizeof运算得到被引用对象所占空间的大小
    Sales_data &d = data;
    cout << sizeof (Sales_data) << endl;
    // 对解引用指针执行sizeof运算得到指针指向的对象所占空间的大小，指针不需要有效
    cout << sizeof *p << endl;
    // 对指针执行sizeof运算得到指针本身所占空间的大小
    cout << sizeof p << endl;
    cout << sizeof d << endl;
    cout << "sizeof string: " << sizeof (string) << endl;
    cout << "sizeof int: " << sizeof (int) << endl;
    cout << "sizeof long: " << sizeof (long) << endl;
    cout << "sizeof char: " << sizeof (char) << endl;
    int arr[]{1,2,3};
    // 对数组执行sizeof运算得到整个数组所占空间的大小，等价于对数组中所有的元素各执行一次sizeof运算并将所得结果求和。 sizeof并不会把数组转换成指针来处理
    cout << "arr size: " << sizeof arr << endl;
    vector<int> v(begin(arr), end(arr));
    // 对string,vector对象执行sizeof运算只返回该类型固定部分的大小，不会计算对象中的元素占用了多少空间
    cout << "vector size: " << sizeof v << endl;
    constexpr auto sz = sizeof arr / sizeof arr[0];
    return 0;
}
