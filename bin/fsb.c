// 64bit: gcc fsb.c -o fsb

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char buf[500];
  read(0, buf, 500);
  printf(buf);
  exit(0);
}
