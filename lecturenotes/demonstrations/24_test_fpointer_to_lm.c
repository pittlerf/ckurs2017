#include <stdio.h>
#include <math.h>
int main(void){
  double (*fp)(double) = cos;

  if( fp == cos ){
    printf("We are pointing at the double-valued cosine function\n");
  }
  return 0;
}
