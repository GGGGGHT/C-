#include <iostream>

using namespace std;


/**
 * 返回类型和return语句
 *
 * return语句终止当前正在执行的函数并将控制权返回到调用该函数的地方
 * eg:
 * - return;
 * - return expression;
 *
 * 不能返回局部对象的引用或指针
 * @return
 */


// ===============不能返回局部对象的引用或指针 eg:==============
// 返回局部对象的引用是错误的，返回局部对象的指针也是错误的 一旦函数完成，局部对象被释放，指针将指向一个不存在的对象
const string &manip() {
    string ret;
    if (!ret.empty()) {
        return ret; // error: 返回局部对象的引用
    } else
        return "empty"; // error: empty是一个局部临时量
}
// ===============不能返回局部对象的引用或指针==============


// ===============引用返回左值 eg:==============
// 函数的返回类型决定函数调用是否是左值 返回值是引用，因此调用是个左值，和其他左值一样它能出现在赋值运算符的左侧
// 如果函数返回的是常量引用，则不能给调用的结果赋值
// cannot assign to return value because function 'get_val' returns a const value
/*const*/ char &get_val(string &str, string::size_type ix) {
    return str[ix];
}
// ===============引用返回左值==============

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

int main() {
    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A'; // 将s[0] 的值改为 A
    cout << s << endl;
    return 0;
}