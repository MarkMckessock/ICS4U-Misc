#include <stdio.h>

int main (void) {
  int fish[10][6];

  int num_rows,num_colmns;
  num_colmns = sizeof(fish[0])/sizeof(fish[0][0]);
  num_rows = sizeof(fish)/sizeof(fish[0]);
  printf("There are %i rows and %i columns.",num_rows,num_colmns);
}
