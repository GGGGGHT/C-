#include <iostream>

int main() {
    using namespace std;

    int carrots; // declare an integer variable

    // carrots = 25;
    cout << "How many carrots do you have?" << endl;

    cin >> carrots;
    cout << "Here are tow more.";
    carrots = carrots + 2;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " crrots." << endl;
}