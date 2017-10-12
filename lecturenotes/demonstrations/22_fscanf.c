#include <stdio.h>
#include <stdlib.h>
int main(void){
  double real;
  FILE* fp = fopen("./test.txt","r");
  if( fp == NULL ){
    printf("Error\n");
    exit(150);
  }
  int rval = 0;
  char buffer[200];
  rval = fscanf(fp, "Test      %lf", &real);
  printf("FP is at: %lu, rval: %d\n", ftell(fp), rval);
  rval = fscanf(fp, "\n");
  printf("FP is at: %lu, rval: %d\n", ftell(fp), rval);
  rewind(fp);
  printf("FP is at: %lu\n", ftell(fp));
  rval = fscanf(fp, "%s", buffer);
  printf("FP is at: %lu, rval: %d\n", ftell(fp), rval);
  rval = fscanf(fp, "%s", buffer+1+ftell(fp) );
  printf("FP is at: %lu, rval: %d\n", ftell(fp), rval);
  printf("%s\n",buffer);
  fclose(fp);
  printf("%lf\n", real);
}
