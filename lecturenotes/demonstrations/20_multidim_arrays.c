#include <stdio.h>
int main(void){
  double A[3][3];
  for(unsigned int i = 0; i < 9; i++){
    *(&A[0][0]+i) = (double)i*i+0.01;
  }
  for(unsigned int r = 0; r < 3; ++r){
    for(unsigned int c = 0; c < 3; ++c){
      printf("A[%d][%d] = %lf  ",r,c,A[r][c]);
    }
    printf("\n");
  }
  return 0;
}
