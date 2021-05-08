#include <iostream>
void simon(int);

int main(void) {
    using namespace std;
    simon(3);
    cout << "please input a num." << endl;
    int num;
    cin >> num;
    simon(num);
    cout << "done." << endl;
}

void simon(int rec) {
    printf("receive num is :%d\n",rec);
}