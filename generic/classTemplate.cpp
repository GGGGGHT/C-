// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/11.
//

#include "classTemplate.h"
#include <iostream>
using namespace std;

int main() {
  Blob<int> squares = {0, 1, 2, 3, 4, 5};
  for (size_t i = 0; i != squares.size(); i++) {
    squares[i] = i * i;
  }

  for (size_t i = 0; i != squares.size(); i++) {
    cout << squares[i] << endl;
  }
}