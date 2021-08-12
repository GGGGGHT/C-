//
// Created by 75685 on 2021/8/12.
//
#include "stdio.h"
#include "malloc.h"

int main(int argc, char *argv[]) {
    char *s;
    int n;

    s = (char *) malloc(50);
    if (s == NULL) {
        printf("OOM");
        return -1;
    }

    scanf("%s", s);
    for (n = 0; *s != '\0'; ++s) {
        ++n;
    }
    s = s - n;
    free(s);
    printf("%d", n);
    return 0;
}
