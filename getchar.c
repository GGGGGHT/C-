//
// Created by 75685 on 2021/8/13.
//

#include <stdio.h>

int main(int args, char *argv[]) {
    int i, j, nw, nd[10], nc[26], nC[26];
    char s[100], c;
    j = 0;
    nw = 0;
    for (i = 0; i < 10; i++) {
        nd[i] = 0;
    }
    for (i = 0; i < 26; i++) {
        nc[i] = 0;
        nC[i] = 0;
    }
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            ++nd[c - '0'];
            continue;
        }

        if (c >= 'a' && c <= 'z') {
            ++nc[c - 'a'];
            continue;
        }

        if (c >= 'A' && c <= 'Z') {
            ++nC[c - 'A'];
            continue;
        }

        ++nw;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", nd[i]);
    }
    printf("\n");

    for (i = 0; i < 26; i++) {
        printf("%c ", 'a' + i);
    }
    printf("\n");
    for (i = 0; i < 26; i++) {
        printf("%d ", nc[i]);
    }
    printf("\n");
    for (i = 0; i < 26; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");
    for (i = 0; i < 26; i++) {
        printf("%d ", nC[i]);
    }
    printf("\n");
    printf("\nnw=%d\n", nw);
    return 0;
}