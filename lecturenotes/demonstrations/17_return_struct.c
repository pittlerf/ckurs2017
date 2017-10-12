#include <stdio.h>
#include <math.h>
struct zweiD_vektor_st {
  double x;
  double y;
};
struct zweiD_vektor_st AblT_zweiD( double dt, struct zweiD_vektor_st *pos,
                                   unsigned int t, unsigned int tmax ){
    struct zweiD_vektor_st v;
    v.x = (pos[t+1].x-pos[t].x)/dt;
    v.y = (pos[t+1].y-pos[t].y)/dt;
    return v;
}
int main(void){
  struct zweiD_vektor_st pos[1000];
  for( unsigned int i = 0; i < 999; ++i ){
    pos[i].x = cos(i*0.01);
    pos[i].y = sin(i*0.01);
  }
  struct zweiD_vektor_st v = AblT_zweiD( 0.01, pos, 54, 1000 );
  printf("v[54] = (%lf,%lf) \n", v.x, v.y );
  return 0;
}
