#include <iostream>

int stonetolb(int);
int main() {
    using namespace std;
    int stone;

    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " store = " << pounds << " pounds." << endl;
}

int stonetolb(int sts) {
    return 14 * sts;
}