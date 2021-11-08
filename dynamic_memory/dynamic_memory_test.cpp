// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.
//
// Created by autorun on 2021/11/8.
//

#include "dynamic_memory_test.h"

void allow(double *pvalue) {
    pvalue = new double;
    if (pvalue == nullptr) {
        INFO("alloc memory fail.");
        exit(1);
    }
}

void allowDouble()
{
    double *pvalue = NULL; // 初始化为 null 的指针
//    pvalue = new double;// 为变量请求内存
    // 如果自由存储区已被用完，可能无法成功分配内存。所以建议检查 new 运算符是否返回 NULL 指针，并采取以下适当的操作：

//    allow(pvalue);
    pvalue = new double;
    *pvalue = 3.1415926;
//    INFO("value: \f\n", *pvalue);
    cout << *pvalue << endl;
    delete pvalue; // 释放 pvalue 所指向的内存
}

void allowCharArray()
{
    char* pvalue = NULL;
    pvalue = new char[20];
    delete[] pvalue;
}

// 二维数组分配
void allowTwoDimensionalArrays()
{
    int** p;
    int i, j;
    p = new int *[4];
    for(i=0;i<4;i++){
        p[i]=new int [8];
    }

    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }

    //打印数据
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)
        {
            if(j==0) cout<<endl;
            cout<<p[i][j]<<"\t";
        }
    }

    //开始释放申请的堆
    for(i=0; i<4; i++){
        delete [] p[i];
    }
    delete [] p;
}
int main() {
//    allowDouble();
    //allowCharArray();
    allowTwoDimensionalArrays();

    return 0;
}