#include <stdio.h>

void main() {
    int n, fibonacci[20] = {0,1};
    printf("%-5d%-5d",fibonacci[0],fibonacci[1]);
    for (n = 2; n < 20 ;n++) {
        fibonacci[n] = fibonacci[n-1] + fibonacci[n-2];
        if (n %5 ==0) printf("\n");
        printf("%-5d",fibonacci[n]);
    }

    printf("\n");
}
