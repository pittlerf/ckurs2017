#include "AblT.h"
double kinEnerg( double *x, double m, unsigned int t ){
  double v = AblT( x, t );
  return 0.5*m*v*v;
}
