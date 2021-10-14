#include<iostream>
#include <stdexcept>
#include <exception>

using namespace std;

/**
 * try语句块和导演处理
 * 异常是指存在于运行时的反常行为，这些行为超出了函数正常功能的范围，典型的导演包括推动数据库连接以及遇到意外输入。
 *
 * 异常处理包括：
 * 1. throw表达式，异常检测部分使用throw表达式来表示它遇到了无法处理的问题
 * 2. try块 异常处理部分用try语句处理异常
 * 3. 一套异常类 用于在throw表达式和相关的catch子句之间传递异常的具体信息
 *
 * try {
 *  program-statements
 * } catch(exception-declaration) {
 *  handler-statements
 * } catch(exception-declaration) {
 *  handler-statements
 * }
 *
 * 没有try语句块也就意味着没有匹配的catch子句，如果一段程序没有try语句块且发生了异常，系统会调用terminate函数并终止当前程序的执行
 *
 *
 *
 * =========
 * exception 头文件定义了最能用的异常类
 * stdexcep 头文件定义了几种常用的异常类
 * new
 * type_info
 * @return
 */
int main() {
    // 根据类型转换规则高潜将运算对象的类型统一后再求值，隐式转换
    int ival = 3.51+ 3;

    return 0;
}
