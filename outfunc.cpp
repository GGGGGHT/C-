#include <iostream>

using  std::cout;
using  std::endl;
using  std::cin;
void simon(int);

int main(void) {    
    simon(3);
    cout << "please input a num." << endl;
    int num;
    cin >> num;
    simon(num);
    cout << "done." << endl;
}

void simon(int rec) {
    cout << "receive num is : " << rec << endl; 
}