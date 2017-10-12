#include <stdio.h>
int main(void){
  unsigned int value = 2147483648;

  int          *d;
  unsigned int *u;

  u = &value;
  d = &value;
  printf("%u\n", *u);
  printf("%d\n", *d);
  return 0;
}
