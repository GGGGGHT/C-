// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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