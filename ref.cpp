#include <iostream>

using namespace std;

int main() {
    int i = 42;
    int &r1 = i;
    const int &r2 = i;

    cout << "i value: " << i << endl;
    cout << "&r1 value: " << r1<< endl;
    cout << "&r2 value: " << r2<< endl;

    r1 = 0;

    cout << "i value: " << i << endl;
    cout << "&r1 value: " << r1<< endl;
    cout << "&r2 value: " << r2<< endl;

    return 0;
}
