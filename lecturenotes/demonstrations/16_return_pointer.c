#include <stdio.h>
double* test_ptr(){
  double v = 4.2;
  return &v; // Compiler warnt, aber kein Fehler!
}
int main(void){
  double *z_v = test_ptr(); // legale Zuweisung
  printf("%lf\n", *z_v ); // Segmentation fault bei Derferenzierung
  return 0;
}
