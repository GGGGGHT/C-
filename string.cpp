// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/5/10.
//

#include "iostream"
#include "cstring"
#include "climits"
// #define String string
using namespace std;

// ========构造 string 的其他方法=======
const char *cp = "Hello world!!!";
char noNull[] = {'H', 'i'};
string s1(cp);
string s2(noNull, 2);
string s3(noNull);
string s4(cp + 6, 5);
string s5(s1, 6, 5);
string s6(s1, 6);
string s7(s1, 6, 20);
// string s8(s1, 16); out_ot_range
// ========构造 string 的其他方法=======

// =======string API =============
// substr
string s("hello world");
auto sub1 = s.substr(0, 5); // hello
auto sub2 = s.substr(6); // world
auto sub3 = s.substr(6, 11); // world
// auto sub4 = s.substr(12); // out_of_range

// 改变 string 的其他方法
auto ins1 = s.insert(s.size(), 5, '!');
auto eras = s.erase(s.size() - 5, 5);
auto ass1 = s.assign(cp, 7);
auto ins2 = s.insert(s.size(), cp + 7);

// append
// replace

// string 搜索操作
string name("AnnaBelle");
auto pos1 = name.find("Anna"); // pos == 0
auto notfound = name.find("anna"); // pos == 0

// 数值操作
int i = 42;
string i2s = to_string(i);
double d = stod(i2s);
// =======string API =============


int main(void) {
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";

	string str1;
	string str2 = "panther";

	/*//    cout << "Enter a king of feline: ";
	//    cin >> charr1;
	//    cout << "Enter another kind of feline: ";
	//    cin >> str1;
	//    cout << "Here are some filines:\n";
	//    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
	//    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	//    cout << "The third letter in " << str2 << " is " << str2[2] << endl;

	// string init
	//    char first_date[] = {"Le Chapon Dodu"};
	//    char second_date[] = {"The Blegant Plate"};
	//    string third_date = {"The Bread Bowl"};
	//    string fourth_date = {"Hank's Fine Eats"};
	//
	//    String str = third_date + fourth_date;
	//    cout << str << endl;
	//    third_date += fourth_date;
	//    cout << third_date;
	//    string newStr;
	//    strcpy(charr1,charr2);
	//    int len1 = str.length();
	//    int len2 = strlen(charr1);
	//    strcpy(charr1, charr2);
	//    cout << endl;
	//    cout << "charr1: " << charr1 << endl;
	//    strcat(charr1, " hello world!");
	//    cout << "charr1: " << charr1 << endl;
	//    cout << "charr1 length: " << strlen(charr1) << endl;
	//    char size[6] = "house";
	//    strcat(size, " of pancakes"); // dynamic_memory problem
	//    cout << size << endl;

	//    char charr[20];
	//    string str;

	//    cout << "Length of string in charr before input: " << strlen(charr) << endl;
	//    cout << "Length of string in str before input: " << str.size() << endl;

	//    cout << "Enter a line of text:\n";
	//    cin.getline(charr, 20); // 20是最大长度
	//    cout << "You entered: " << charr << endl;
	//    cout << "Enter another line of text: \n";
	//    getline(cin, str);
	//    cout << "You entered: " << str << endl;
	//    cout << "Length of string in charr after input: " << strlen(charr) << endl;
	//    cout << "Length of string in str after input: " << str.size() << endl;*/

	/*   cout << "sizeof(wchar_t): " <<sizeof(wchar_t) << endl;
	   cout << "sizeof(char16_t): " <<sizeof(char16_t) << endl;
	   cout << "sizeof(char32_t): " <<sizeof(char32_t) << endl;

	   wchar_t title[] = L"Chief Astrogator";
	   char16_t name[] = u"Felonia Ripova";
	   char32_t car[] = U"Humber Super Snipe";

	   cout << "sizeof(title): " <<sizeof(title) << endl;
	   cout << "sizeof(name): " <<sizeof(name) << endl;
	   cout << "sizeof(car): " <<sizeof(car) << endl;
	   cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';

	   cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;

	   cout << sizeof (char) << endl;*/

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;
	cout << "s6: " << s6 << endl;
	cout << "s7: " << s7 << endl;
	// cout << "s8: " << s8 << endl;

	cout << "sub1: " << sub1 << endl;
	cout << "sub2: " << sub2 << endl;
	cout << "sub3: " << sub3 << endl;
	// cout << "sub4: " << sub4 << endl;

	cout << "ins1: " << ins1 << endl;
	cout << "eras: " << eras << endl;
	cout << "ass1: " << ass1 << endl;
	cout << "ins2: " << ins2 << endl;

	string str = "some string", oth = "some other string";
	str.insert(0,oth);
	cout << "str: " << str << endl;
	// 在 str[0]之前插入s2中 oth[0]开始的oth.size()个字符
	str.insert(0, oth, 0, str.size());
	cout << "str: " << str << endl;

	cout << "pos1: " << pos1 << endl;
	cout << "notfound: " << notfound << endl;
	cout << "not find? " << (string::npos == notfound) << endl;

	string numbers("0123456789"), fname("r2d2");
	auto p = fname.find_first_of(numbers);
	cout << "p: " << p << endl;

	cout << "i2s: " << i2s << endl;
	cout << "d: " << d << endl;

	string a("pi = 3.14");
	cout << stod(a.substr(a.find_first_of("+-.0123456789"))) << endl;
}