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
