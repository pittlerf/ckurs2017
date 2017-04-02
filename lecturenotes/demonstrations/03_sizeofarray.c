#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double* array;
  array = (double*) malloc(sizeof(double)*4);

  printf("sizeof(array): %ld bytes\n",sizeof(array));
  printf("sizeof(double*): %ld bytes\n", sizeof(double*));
  printf("sizeof(double): %ld bytes\n", sizeof(double));
  return 0;
}
