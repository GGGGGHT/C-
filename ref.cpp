// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <iostream>

using namespace std;

int main() {
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    int *p = &i;
    int *&r3 = p;

    cout << "i value: " << i << endl;
    cout << "&r1 value: " << r1<< endl;
    cout << "&r2 value: " << r2<< endl;

    r1 = 0;

    cout << "i value: " << i << endl;
    cout << "&r1 value: " << r1<< endl;
    cout << "&r2 value: " << r2<< endl;

    *r3 = 100;
    cout << "i value: " << i << endl;
    cout << "&r1 value: " << r1<< endl;
    cout << "&r2 value: " << r2<< endl;
    return 0;
}
