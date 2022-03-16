//
// Created by autorun on 2021/11/2.
//

#include "function_point.h"

bool lengthCompare(const string &s2, const string &s3) {
    return s2.size() > s3.size();
}

int add(int a,int b) {return a+b;}

int main()
{
    auto pr = lengthCompare;
    bool rst = pr("abc23", "defg");
    cout << rst << endl;

//    bool rst2 = (*pf)("abc", "d");
//    cout << rst2 << endl;

    // 局部变量 
    int (*addPointer)(int,int) = add;
bool r3 = lengthCompare("abb", "cdde");
cout << r3 << endl;
    return 0;
}

// C程序中的函数指针与指针函数
// 指针函数
int *fun(int a,int b);
// 函数指针
void (*fun)(int a,int b);
// 函数原形
void add(int a,int b);
// 为函数指针赋值 
fun = add;
// 形式上的差异： 如果函数名称前面的指针符号没有被括号包含，则所定义的就是指针函数。否则为函数指针。
// 内容上的差异： 1. 指针函数声明的是一个函数，与一般的函数声明并无多大区别，唯一有区别的就是指针函数的返回类型是一个指针，而一般函数声明所返回的则是普通变量类型
//                2. 函数指针声明的是一个指针，只不过这个指针与一般的指针不同，一般的指针指向一个变量的内存地址，而函数指针指向的是一个函数的首地址


// 函数指针定义的两种方式 
// return_type (*func_pointer) (data_type arg1,data_type arg2...);
// 上述的这种方式相当于直接定义了一个变量 ，可以直接对该变量进行赋值，函数指针与普通变量一样，可以在函数外面声明，作为全局变量，也可以在函数内部声明，作为局部变量
// typedef (*func_pointer)(data_type arg1, data_type arg2...);
// 定义一个类型，通过所定义的类型去声明函数指针 

// 类型声明的方式和直接声明的方式相比,主要区别在于,通过类型声明的方式定义的仅仅是一个类型,由这个类型无法直接去初始化函数指针,因为类型不是变量.
