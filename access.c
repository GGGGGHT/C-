// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include "apue.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc != 2) err_quit("usage: a.out <pathname>");

    if(access(argv[1],R_OK) < 0) err_ret("access error for %s", argv[1]);
    else printf("read access OK\n");

    if(open(argv[1],O_RDONLY) < 0) err_ret("open error for %s", argv[1]);
    else printf("open for reading...OK\n");
    
    
    return 0;
}
