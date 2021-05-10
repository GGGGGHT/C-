//
// Created by Admin on 2021/5/10.
//

#include "enumlearning.h"
#include "iostream"

using namespace std;
enum spectrum {
    red, orange, yellow, green, blue
};

int main() {
    spectrum band;
    band = blue;
    int color = red;
    cout << color;
    band = spectrum(999999999999);
    cout << band;
    return 0;
}