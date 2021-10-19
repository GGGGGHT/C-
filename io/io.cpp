#include <iostream>
// #include <fstream>
#include <vector>
#include <sstream>
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

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

bool valid(const std::string nums) {
	return nums.size() > 3;
}

std::string format(const std::string nums) {
	std::string tmp(nums);
	return nums.size() > 3 ? nums : tmp.append("+++");
}

int main(int argc, char **argv) {
	// cout << "Hi" << endl; // 输出Hi和一个换行，然后刷新缓冲区
	// cout << "Hi" << flush; // 输出Hi，然后刷新缓冲区，不附加任何额外字符
	// cout << "Hi" << ends; // 输出Hi和一个空字符,然后刷新缓冲区
	//
	// // unitbuf 每次输出操作后都刷新缓冲区 即每次写操作之后都进行一次flush操作
	// // nounitbuf 重置流,使其使用正常的系统管理缓冲区刷新机制
	// cout << unitbuf;
	// // 中间操作立即刷新无缓冲
	// cout << nounitbuf;

	// ==============文件输入输出==============
	// ifstream 从给定写文件读取数据
	// ofstream 向给定文件写数据
	// fstream 读写给定文件

	/*ifstream input(argv[1]);
	ofstream output(argv[2]);
	Sales_data total;
	if(read(input,total)) {
		Sales_data trans;
		while (read(input, trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			} else {
				print(output,total) << endl;
				total = trans;
			}
		}

		print(output, total) << endl;
	} else {
		cerr << "No data?!" << endl;
	}*/
	/*std::string ifile("/Users/admin/a.opt");
	std::ifstream in(ifile);
	std::ofstream out;
	const std::string content("hello world");
	if (out) {
		// 以out模式打开文件会丢弃已有数据 下面的几条语句中file都会被截断
		// out.open(ifile + ".copy"); // 隐含以输出模式打开文件并截断文件
		// out.open(ifile + ".copy",std::ofstream::out); // 隐含地截断文件
		// out.open(ifile + ".copy", std::ofstream::out | std::ofstream::trunc);
		// 为了保留文件中的内容,必须显示指定app模式
		// out.open(ifile + ".copy", std::ofstream::app);
		// out.open(ifile + ".copy", std::ofstream::out | std::ofstream::app);
		// out << " got file" << std::endl;
		// !!!import: 保留被ofstream打开的文件中已有数据的唯一方法是显式指定app或in模式
		// out << content << std::flush;

		// 当程序未指定模式时，使用默认值
		out.open(ifile + ".copy");
		out.close();
		out.open(ifile + ".copy", std::ofstream::app);
		out.close();
	} else
		std::cerr << "can't open " << ifile << std::endl;*/



	// cout << "is open: " << in.is_open() << endl;

	// ==============文件输入输出==============

	// ============string输入输出=============
	// istringstream 从string读取数据
	// ostringstream 向string写入数据
	// stringstream 可读取 也可写入
	std::string line, word;
	std::vector<PersonInfo> people;
	while (getline(std::cin, line)) {
		PersonInfo info;
		std::istringstream record(line);
		record >> info.name;
		while (record >> word) {
			info.phones.push_back(word);
		}

		people.push_back(info);
	}

	// auto b = people.begin(), e = people.end();
	// while (b != e) {
	// 	std::cout << "b name : " << b->name << std::endl;
	// 	auto sb = b->phones.begin(), se = b->phones.end();
	// 	while (sb != se) {
	// 		std::cout << *sb++ << std::endl;
	// 	}
	// 	++b;
	// }

	// 使用ostringstream输出
	using namespace std;
	for(const auto &entry: people) {
		ostringstream formatted, badNums;
		for(const auto &nums :entry.phones) {
			if(!valid(nums)) {
				badNums << " " << nums;
			} else {
				formatted << " " << format(nums);
			}
		}

		if (badNums.str().empty()) {
			os << entry.name << " " << formatted.str() << endl;
		} else
			cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << endl;
	}
	// ============string输入输出=============
	return 0;
}

