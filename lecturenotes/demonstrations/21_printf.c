#include <stdio.h>
int main(void){
  printf("%.2f\n", 2.3453);
  printf("%5d\n", 32);
  printf("%05d\n", 32);
  printf("%05d\n", 999932);
  printf("%+05d\n", 32);
  printf("%8.3f\n", 42.3453);
  printf("%-5d %d\n", 32, 1);
}
