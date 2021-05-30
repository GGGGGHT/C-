// learning C++ basic data type 
// unsigned long
// long 
// unsigned int 
// int 
// unsigned short
// short 
// unsigned char
// char 
// signed char
// bool

// C++ 11 
// unsigned long long 
// long long

// float
// double
// long double
// cfloat
#include <iostream>
#define ZERO 0
#include <climits>

using std::cout;
using std::endl;
int main() {
//    cout << "char: " << sizeof(char) << std::endl;
//    cout << "short: " << sizeof(short) << std::endl;
//    cout << "int: " << sizeof(int) << std::endl;
//    cout << "long: " << sizeof(long) << std::endl;
//    cout << "long long: " << sizeof(long long) << std::endl;
//    cout << "int max: " << INT_MAX << endl;
//    cout << "long max: " << LONG_MAX << endl;
//    cout << "short max: " << SHRT_MAX << endl;
//    int hamburgers = {};
//    cout << hamburgers;
//    short sam = SHRT_MAX;
//    unsigned short sue = sam;
//
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited." << endl
//        << "And $1 to each account." << endl << "Now ";
//
//    sam += 1;
//    sue += 1;
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited.\n Poor Sam!" << endl;
//    sam = ZERO;
//    sue = ZERO;
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited.\n Poor Sam!" << endl;
//    cout << "Take $1 from each accout." << endl << "Now ";
//    sam = sam -1;
//    sue = sue - 1;
//
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited." << endl << ":iclu Sie!" << endl;
//    int chest = 42;
//    int waist = 0x42;
//    int inseam = 042;
//
//    cout << "Monsieur cuts a striking figure!\n";
//    cout << "chest = " << chest << " (42 in decimal)" << endl;
//    cout << "waist = " << waist << " (0x42 in hex)" << endl;
//    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

//    cout << "Monsieur outs a striking figure!" << endl;
//
//    cout << "chest = " << chest << "(decimal for 42)" << endl;
//    cout << hex;
//    cout << "waist = " << waist << "(hexadecimal for 42)" << endl;
//    cout << oct;
//    cout << "inseam = " << inseam << "(octal for 42)" << endl;
//    cout << 1234 << endl;
//
//    char ch;
//
//    cout << "enter a char: " << endl;
//    cin >> ch;
//    cout << "Hola! ";
//    cout << "Thank you for the " << ch << " character." << endl;

    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " <<  i << endl;

    cout << "And one to the character code: " << endl;
    ch += 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " <<  i << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');

    cout << endl << "Done" << endl;

    cout << '$';
    cout.put('$');

    cout << sizeof byte << endl;
}