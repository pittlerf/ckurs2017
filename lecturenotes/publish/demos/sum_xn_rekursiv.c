#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double sum_xn(const double x, const double S, const double xn, const double tolerance){
  if( fabs(x) > 1 ){
    printf("sum_xn kann nicht mit |x| > 1 aufgerufen werden!\n");
    exit(55);
  }
  if( xn < tolerance ){
    return S;
  } else {
    return sum_xn( x, S+xn, xn*x, tolerance );
  }
}

int main(void){
  double S = sum_xn( 0.99999, 0.0, 1.0, 1e-24 );
  printf("sum_xn = %lf\n", S);
  return 0;
}
