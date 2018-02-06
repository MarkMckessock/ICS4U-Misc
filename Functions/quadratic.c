#include <stdio.h>
#include <math.h>

int main (void){
  int a,b,c,soln_1,soln_2;
  printf("Enter the coefficients of the quadratic in the form ax^2 + bx + c = 0.\n");
  scanf("%i%i%i",&a,&b,&c);

  // Check for roots
  if (-b/(2*a)<0){
    printf("There are no real roots.");
    return 1;
  }
  soln_1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
  soln_2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
  
  if (soln_1 == soln_2){
    printf("The root of the quadratic is %i.",soln_1);
  }
  else
    printf("The roots of the quadratic are %i and %i.",soln_1,soln_2);
}
