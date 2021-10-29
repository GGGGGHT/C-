// Copyright (c) 2021. Lorem ipsum dolor sit amet, consectetur adipiscing elit.
// Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget quam lacinia accumsan.
// Etiam sed turpis ac ipsum condimentum fringilla. Maecenas magna.
// Proin dapibus sapien vel ante. Aliquam erat volutpat. Pellentesque sagittis ligula eget metus.
// Vestibulum commodo. Ut rhoncus gravida arcu.

#include "apue.h"

/**
*
* getc read one byte and putc write the char to stdout when read the last one 
* getc return a  EOF 
*/
int main() {
    
    int c;

    while((c = getc(stdin)) != EOF) {
        if(putc(c,stdout) == EOF) {
            err_sys("out put error");
        }
    }


    if(ferror(stdin)) {
        err_sys("input error");
    }


    exit(0);
}
