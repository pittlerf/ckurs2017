#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
  for(unsigned int i = 0; i < argc; ++i){
    printf("Argument %d: %s\n", i, argv[i]);
  }
  printf("%d\n", atoi(argv[1]) );
  int k = atoi(argv[1]);
  printf("%d\n", k);
  return 0;
}
