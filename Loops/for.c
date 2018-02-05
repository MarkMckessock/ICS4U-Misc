#include <stdio.h>

int main(void) {
  int n, triangle_number;
  triangle_number = 0;
  for (n=1; n <= 200; n++)
    triangle_number += n;
  printf("The 200th triangular number is %i\n",triangle_number);
  return 0;
}
