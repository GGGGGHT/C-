#include <iostream>

// using namespace std;

/**
 * 类型成员
 * 类的成员类内初始值
 * 可谈数据成员
 * 内联成员函数
 * 从成员函数返回*this
 * @return
 */


// ============类型成员===========
class Screen {
public:
	// typedef std::string::size_type pos;
	using pos = std::string::size_type;

	Screen() = default;

	Screen(pos ht, pos wd, char c) : height(ht), width(wd),
			// 调用string(n,c)构造方法 生成n和c字符
			                         contents(ht * wd, c) {}

	char get() const {
		return contents[cursor]; // 隐式内联
	} // 读取光标处的字符

	inline char get(pos ht, pos wd) const; // 显示内联

	Screen &move(pos r, pos c);

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline &
Screen::move(pos r, pos c ) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos ht, pos wd) const {
	auto row = r * width;
	return contents[row + c];
}
// 在类中一些规模较小的函数适合于被声明成函数 定义在类内部的成员函数是自动内联的
// ============类型成员===========


int main(int argc, char **argv) {
	Sales_data data;
	// cout << "--> " << data.aaa << endl;
	// cout << data.bookNo << endl; error无法访问 private
	return 0;
}