#include "apue.h"
#include <fcntl.h>


char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main() {
   int fd;
    
    if ((fd = creat("file.hole", FILE_MODE)) < 0) 
        err_sys("Create error!"); 

    if (write(fd, buf1, 10) != 10) 
        err_sys("buf1 write error!"); 

    if(lseek(fd, 16384, SEEK_SET) == -1) 
        err_sys("lseek error");
 
    if (write(fd, buf2, 10) != 10) 
        err_sys("buf2 write error!"); 

    off_t currpos;
    currpos = lseek(fd, 0, SEEK_CUR);
    printf("Current offset is %d", currpos);
    exit(0);
}
