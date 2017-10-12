double AblT( double *x, unsigned int t ){
  double dt = 0.01;
  return (x[t+1]-x[t])/dt;
}
