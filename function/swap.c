#include <stdio.h>

void swap(int*,int*);

// 如果将指向参数的指针作为参数传递，则传递的是参数的地址值。因为传递的是参数的地址值，所以就是传递实参本身。当在函数中改变形参的值时，改变的就是原来实参的值。
// 在传递地址值时，系统并不为形参分配新的地址，而是为指针变量分配地址，指针变量存储的是指向实参的存储地址，所以在被调函数中若改变形参的值，也就改变了原来变量的数值
int main() {
    int a = 1, b = 2;
    printf("&a = %#p,&b = %#p\n",&a,&b);
    printf("before: a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("after: a=%d,b=%d\n",a,b);
    return 0;
}


void swap(int *a,int *b) {
    printf("swap before: a=%d,b=%d\n",*a,*b);
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    printf("swap after: a=%d,b=%d\n",*a,*b);
}
