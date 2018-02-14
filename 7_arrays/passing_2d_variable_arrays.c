#include <stdio.h>

int function (int rows, int columns, int array[rows][columns]){
  return array[0][0];
}

int main (void) {
  int cats[10][10];
  cats[0][0] = 5
  printf("%i",function(sizeof(cats)/sizeof(cats[0]),sizeof(cats[0])/sizeof(cats[0][0]),cats));
}
