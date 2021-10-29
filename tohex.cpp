// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include <iostream>

using namespace std;

const string hexdigits = "0123456789ABCDEF";
int main() {
    cout << "Enter a series of numbers between 0 and 15" << " separated by spaces. Hit ENTER when finished: " << endl;

    string result;
    string::size_type n;
    while(cin >> n) {
        if (n < hexdigits.size()) {
            result += hexdigits[n];
        }
    }

    cout << "Your hex number is: " << result << endl;

    for (auto &c: hexdigits) {
        cout << c << endl;
    }
}

