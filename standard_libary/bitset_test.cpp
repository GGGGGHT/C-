// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/15.
//

#include "bitset_test.h"
#include <bitset>
#include <iostream>

using namespace std;
int main() {
  int x = 5;
  std::bitset<sizeof(x)*8> y(x);
  auto s = y.to_string();
  // 0低位                           32 高位
  // 00000000000000000000000000000101
  std::cout << s << std::endl;

  // 比初始值小;初始值高位被丢弃
  // 1 1110 1110 1111
  bitset<13> bitvec1(0xbeef);
  std::cout << bitvec1.to_string() << std::endl;
  // 比初始值大;高位置为0
  // 0000 1011 1110 1110 1111
  bitset<20> bitvec2(0xbeef);
  std::cout << bitvec2.to_string() << std::endl;
  // 00000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111
  bitset<128> bitvec3(~0ULL);
  std::cout << bitvec3.to_string() << std::endl;


}