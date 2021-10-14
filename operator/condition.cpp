#include<iostream>
#include <vector>

using namespace std;

/**
 * 条件运算符
 *
 * cond ? expr1 : expr2;
 * @return
 */
int main() {
    int grade = 35;
    cout << ((grade < 60) ? "fail" : "pass") ;
    cout << endl;
    auto res = cout << (grade < 60) ? "fail" : "pass";
    cout << res;
    // error compare cout with 60
     cout << grade < 60 ? "fail" : "pass";
    // like tihs:
    // cout << grade;
    // cout < 60 ? "fail" : "pass"; wrong

    return 0;
}
