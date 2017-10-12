#include "AblT.h"
#include "kinEnerg.h"
#include <stdio.h>
#include <math.h>
int main(void){
  double x[1000];
  for(unsigned int i = 0; i < 1000; ++i){
    x[i] = cos(i*0.01);
  }
  for(unsigned int i = 1; i < 999; ++i){
    printf("t = %lf, x[t/0.01] = %lf, E_k = %lf\n", i*0.01, x[i], kinEnerg(x,1,i));
  }
  return 0;
}
