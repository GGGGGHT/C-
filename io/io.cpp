#include <iostream>
#include <fstream>

using namespace std;
/**
 * istream 输入流 提供输入操作
 * ostream 输出流 提供输出操作
 * cin 一个istream对象 从标准输入读取数据
 * cout 一个ostream对象，向标准输出定稿数据
 * cerr 一个ostream对象，通常用于输出程序错误消息，写入到标准错误
 * >> 用来从一个istream对象读取输入数据
 * << 用来向一个ostream对象写入输出数据
 * getline 函数，从一个给你写的istream读取一行数据。存入一个给你写的string对象中
 *
 *
 * 头文件		作用
 * iostream  | 用于读写流的基本类型
 * fstream	 | 用于读取命名文件的类型
 * sstream	 | 用于读写内存string对象的类型
 *
 * 不能拷贝或对IO对象进行赋值
 *
 * @return
 */
int main() {
	cout << "Hi" << endl; // 输出Hi和一个换行，然后刷新缓冲区
	cout << "Hi" << flush; // 输出Hi，然后刷新缓冲区，不附加任何额外字符
	cout << "Hi" << ends; // 输出Hi和一个空字符,然后刷新缓冲区

	// unitbuf 每次输出操作后都刷新缓冲区 即每次写操作之后都进行一次flush操作
	// nounitbuf 重置流,使其使用正常的系统管理缓冲区刷新机制
	cout << unitbuf;
	// 中间操作立即刷新无缓冲
	cout << nounitbuf;

	return 0;
}
