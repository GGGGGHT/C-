//
// Created by Admin on 2021/5/10.
//

#include "iostream"
#include "cstring"
#include "climits"
#define String string

int main(void) {
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";

    string str1;
    string str2 = "panther";

//    cout << "Enter a king of feline: ";
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
//    strcat(size, " of pancakes"); // memory problem
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
//    cout << "Length of string in str after input: " << str.size() << endl;

    cout << "sizeof(wchar_t): " <<sizeof(wchar_t) << endl;
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

    cout << sizeof (char) << endl;
}