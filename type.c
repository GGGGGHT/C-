// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include "apue.h"
#include <stdio.h>

int main(int argc,char* argv[]) {
    int i;
    struct stat buf;
    char *ptr;
    
    for (i = 1; i < argc; i++ ) {
        printf("%s: ",argv[i]);
        if (lstat(argv[i],&buf) < 0) {
           err_ret("lstat error");
            continue; 
        }

        if(S_ISREG(buf.st_mode)) ptr = "regular";
        if(S_ISDIR(buf.st_mode)) ptr = "directory";
        if(S_ISCHR(buf.st_mode)) ptr = "character special";
        if(S_ISBLK(buf.st_mode)) ptr = "block special";
        if(S_ISFIFO(buf.st_mode)) ptr = "fifo";
        if(S_ISLNK(buf.st_mode)) ptr = "symbolic link";
        if(S_ISSOCK(buf.st_mode)) ptr = "socket";

        printf("%s\n",ptr);
    }
}
