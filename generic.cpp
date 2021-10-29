// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

// #include <iostream>

// using namespace std;

#include <iostream>

int main() {
    using namespace std;
    // bool b = 42;
    // cout << "b: " << b << endl;
    // int i = b;
    // cout << "i: " << i << endl;
    // i = 3.14;
    // cout << "i: " << i << endl;
    // double pi = i;
    // cout << "pi: " << pi << endl;
    // unsigned char c = -1;
    // cout << "c: " << c << endl;
    // signed char c2 = 256;
    // cout << "c2: " << c2 << endl;
    
    // unsigned u = 10;
    // i = -42;
    // cout <<  i + i << endl;
    // cout <<  u + i << endl;
    // long double ld = 3.141592653;
    // int a{ld}, b = ld;
    // int c(ld), d(ld);
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    // cout << d << endl;
    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;
    int i3 = 1024 ,&ri = i3;
    int &r3 = i3, &r4 = i2;
    r3 = 9999;
    std::cout << i << '\t' << i2 << '\t' << i3 << '\t' << r2 << std::endl;
    std::cout << r << '\t' << ri << '\t' << r3 << '\t' << r4 << std::endl;

    int q, &rq = q;
    q = 5; rq = 10;
    cout << q << " " << rq << endl;
    // std::cout << i << i2 << std::endl;
    // cout << r << ri << r3 << r4 << endl;
    return 0;
}
