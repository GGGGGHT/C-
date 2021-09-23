#include <iostream>

using namespace std;


int main() {
    bool b = 42;
    cout << "b: " << b << endl;
    int i = b;
    cout << "i: " << i << endl;
    i = 3.14;
    cout << "i: " << i << endl;
    double pi = i;
    cout << "pi: " << pi << endl;
    unsigned char c = -1;
    cout << "c: " << c << endl;
    signed char c2 = 256;
    cout << "c2: " << c2 << endl;
    
    unsigned u = 10;
    i = -42;
    cout <<  i + i << endl;
    cout <<  u + i << endl;

    
    return 0;
}
