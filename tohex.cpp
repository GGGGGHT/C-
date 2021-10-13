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

