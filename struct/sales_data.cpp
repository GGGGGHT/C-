#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

using namespace std;
int main() {
//    Sales_data s1,s2;
//
//    double price = 0;
//    std::cin >> s1.bookNo >> s1.units_sold >> price;
//    s1.revenue = s1.units_sold * price;
//    std::cout << s1.revenue << std::endl;
//    std::cin >> s2.bookNo >> s2.units_sold >> price;
//    s2.revenue = s2.units_sold * price;
//
//    if(s1.bookNo == s2.bookNo) {
//        unsigned totalCnt = s1.units_sold + s2.units_sold;
//    }
//    string hello = "Hello";
//    string h2 = "Hello world";
//    cout << (hello > h2) << endl;
//    string s1 = "hello";
//    string s2 = "world";
//    string s3 = s1 + ", " + s2 + '\n';
//    cout << s3;

//    string str = "Hello world";
//    for (auto s : str) {
//        cout << s << endl;
//    }
//
//    string s("Hello world!!!");
//    decltype(s.size()) punct_cnt = 0;
//    for (auto c : s) {
//        if (ispunct(c)) {
//            ++punct_cnt;
//        }
//    }
//
//    cout <<punct_cnt << " punctuation characters in " << s << endl;
//    while (cin >> world) {
//        auto len = world.size();
//
//        if(len > 3)
//            cout << world << endl;
//    }

    string s("Hello World!!!");
//    for(auto &c: s) {
//        c = toupper(c);
//    }
//
//    cout << s << endl;
//    if(!s.empty()) {
//        cout << s[0] << endl;
//        s[0] = tolower(s[0]);
//    }
//    cout << s << endl;

    // use iterator change first world to upper case
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);
    }

    cout << s << endl;
    return 0;
}
