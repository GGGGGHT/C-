//
// Created by autorun on 2021/11/2.
//

#include "function_point.h"

bool lengthCompare(const string &s2, const string &s3) {
    return s2.size() > s3.size();
}

int main()
{
    auto pr = lengthCompare;
    bool rst = pr("abc23", "defg");
    cout << rst << endl;

//    bool rst2 = (*pf)("abc", "d");
//    cout << rst2 << endl;

bool r3 = lengthCompare("abb", "cdde");
cout << r3 << endl;
    return 0;
}