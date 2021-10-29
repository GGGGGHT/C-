// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

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
