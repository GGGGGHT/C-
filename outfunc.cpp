// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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