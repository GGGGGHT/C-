// Copyright (c) 2021-2021. Lorem ipsum dolor sit amet, consectetur adipiscing
// elit. Morbi non lorem porttitor neque feugiat blandit. Ut vitae ipsum eget
// quam lacinia accumsan. Etiam sed turpis ac ipsum condimentum fringilla.
// Maecenas magna. Proin dapibus sapien vel ante. Aliquam erat volutpat.
// Pellentesque sagittis ligula eget metus. Vestibulum commodo. Ut rhoncus
// gravida arcu.

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void *func(void *arg) {
  printf("hello world!\n");

  pthread_exit((void *)0);
}

int main(int argc, char **argv) {
  pthread_t pid;
  void* ret;
  if((pthread_create(&pid,NULL,func,NULL) != 0)) {
    printf("pthread_create err\n");
    return -1;
  }

  if(pthread_join(pid, &ret) != 0) {
    printf("pthread_join err\n");
    return -1;
  }

  printf("main end!");
  return 0;
}