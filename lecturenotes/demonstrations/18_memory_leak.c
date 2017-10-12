#include <stdlib.h>
#include <stdio.h>
int main(void){
  double *x;
  for( unsigned int i = 0; i < 100; ++i ){
    x = malloc( sizeof(double)*(i+1) );
    if( x == NULL ){
      printf("Allocation failed\n");
    }
    x[0] = 0.0;
  }
  printf("%lf\n",x[0]);
  free(x);
  return 0;
}
