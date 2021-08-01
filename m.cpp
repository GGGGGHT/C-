#include <stdio.h>

int main() {
    int a = 65;
    int *addr;
    
    addr = &a;

    printf("%p, %p, %p\n", &a, addr, (int*)addr);
    printf("%d, %d\n", a, *&a);

    return 0;
}
