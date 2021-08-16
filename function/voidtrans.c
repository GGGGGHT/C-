#include <stdio.h>

void add(double,double,double *);

// add函数里的指针q指向主函数变量c的存储地址，*q与c同步变化。调用结束后，系统回收为add函数里形参分配的地址，形参变量也随之消失，而c和*q是同一个地址，所以虽然q消失了，但c却保持为原来*q的值。
void main() {
    double a = 5.5,b = 15.39, c= 0;
    add (a,b,&c);
    printf("%f\n",c);
    c = 10 * c;
    printf("%f\n",c);
}

void add(double m,double n,double *q) {
    *q = m + n + 0.0065;
    return ;
}
