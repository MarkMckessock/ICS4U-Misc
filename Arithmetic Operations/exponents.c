#include <stdio.h>
#include <math.h> //Gives access to pow() function for exponents

int main(void) {
  float x = 2.55;
  float polynomial = 3*pow(x,3)-5*pow(x,2)+6;
  printf("The polynomial 3x^3-5x^2+6 evaluates to %f, when x=2.55",polynomial);
}
