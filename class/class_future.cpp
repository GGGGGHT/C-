#include <iostream>
#include <vector>

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
// 在类中一些规模较小的函数适合于被声明成函数 定义在类内部的成员函数是自动内联的
class Screen {
	// 如果一个类指定了友元类，则友远隔类的成员函数可以访问此类包括非仅有成员在内的所有成员。
	// Window_mgr的成员可以访问Screen类的私有部分
	friend class Window_mgr;
	// friend void Window_mgr::clear(ScreenIndex);

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

	// 重载成员函数
	inline char get(pos ht, pos wd) const; // 显示内联

	Screen &move(pos r, pos c);

	Screen &set(char);

	Screen &set(pos, pos, char);

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline Screen &Screen::move(pos r, pos c) {
	auto row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const {
	auto row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}


class Window_mgr {
public:
	typedef std::vector<Screen>::size_type ScreenIndex;

	void clear(ScreenIndex);
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i) {
	std::cout << "call clear method." << std::endl;
	auto &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}
// ============类型成员===========


int main(int argc, char **argv) {
	Window_mgr mgr;
	mgr.clear(0);
	return 0;
}