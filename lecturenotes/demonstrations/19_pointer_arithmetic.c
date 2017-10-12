#include <stdio.h>
int main(void){
  int k[30]; for(unsigned int i = 0; i < 30; ++i){ k[i] = i; }
  int *z1_k = k;
  int *z2_k = &k[0];
  int *z3_k = z2_k;
  
  z2_k++;
  z1_k = &k[1];

  int dk = 2;
  z3_k = z3_k + dk;
  printf("k[2] = %d, *(k+2) = %d, (*z1_k) = %d,\
         (*z2_k) = %d, (*z3_k) =  %d, z1_k[-1] = %d\n", k[2], *(k+2), *z1_k, *z2_k, *z3_k, z1_k[-1]);
  return 0;  
}
