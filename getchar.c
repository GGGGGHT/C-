//
// Created by 75685 on 2021/8/13.
//

#include <stdio.h>

/**
 * index    arr     point   point_index
 * a[0]     a       pa      pa[0]           a[0] == *a  == *pa == pa[0]
 * a[1]     a[1]    pa+1    pa[1]           a[1] == *(a+1) == *(pa+1) == pa[1]
 * a[2]     a[2]    pa+2    pa[2]           a[2] == *(a+2) == *(pa+2) == pa[2]
 * a[3]     a[3]    pa+3    pa[3]           a[3] == *(a+3) == *(pa+3) == pa[3]
 * a[4]     a[4]    pa+4    pa[4]           a[4] == *(a+4) == *(pa+4) == pa[4]
 *
 * @param args
 * @param argv
 * @return
 */
int main(int args, char *argv[]) {
    /*int i, j, nw, nd[10], nc[26], nC[26];
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
    printf("\nnw=%d\n", nw);*/

    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    for (int i = 0; i < 5; ++i) {
        printf("index: %d, point: %d\n", a[i], *(p + i));
    }
    return 0;
}