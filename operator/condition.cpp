// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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
