#include <stdio.h>

/**
* 字符串顺序存放，字符串名是其首地址，p输出的不是地址，而是地址里的内容。
*
*/
void main() {
    int i=0;
    char a[] = "ABCD", *p = "abcd";
    printf("%s,%s\n",a,p);

    for(i = 0;i<4;i++) {
        printf("%c ",p[i]);
    }

    while(*p) 
        printf("%c",*p++);

    p-=2;
    printf(" %s\n",p);

    p = a;
    printf("%s, %s\n",a,p);
}
