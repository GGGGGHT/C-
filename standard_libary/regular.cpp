// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam
// lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla. Maecenas
// magna. Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque
// sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus gravida arcu.

//
// Created by Admin on 2021/11/15.
//

#include "regular.h"
#include <iostream>
#include <regex>
#include <string>
/**
 * 正则表达式
 * @return
 */
using namespace std;
int main() {
  std::string pattern("[^c]ei");
  pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
  std::regex r(pattern);
  cout << "flags: " << r.flags() << endl;
  smatch results;
  std::string test_str = "receipt freind theif receive";
  // cout << regex_replace(test_str, r, "haha") << endl;
  if (regex_search(test_str, results, r))
    cout << results.str() << endl;

  // 忽略大小写 匹配文件名
  regex fileReg("[[:alpha:]]+\\.(cpp|cxx|cc)$", regex::icase);
  std::string filename;
  while(cin >> filename) {
    if(regex_search(filename,results,fileReg))
      cout << results.str() << endl;
  }

  try {
    std::regex reg("[[:alnum:]+\\.(cpp|cxx|cc)$]", std::regex::icase);
  } catch (std::regex_error e) {
    std::cout << e.what() << "\ncode: " << e.code() << std::endl;
  }

}

