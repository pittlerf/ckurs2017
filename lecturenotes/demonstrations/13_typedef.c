#include <stdio.h>
int main(void){
  typedef double fliesskommazahl;
  fliesskommazahl x = 1.2;
  printf("%lf\n", x);

  struct position {
    double x;
    double y;
  };

  struct position t1[1000];

  //position t1;
  t1[1].x = 1.3;
  t1[1].y = 1.4;
  printf("x = %lf, y = %lf\n", t1[1].x, t1[1].y);

    

  return 0;
}
