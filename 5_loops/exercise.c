#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main (void){
  /*
  int i,square; // 2)
  printf("Number:     Square:\n");
  for(i=1; i<=10; i++){
    square = i*i;
    printf("%2i     %i\n",i,square);
  }

  int number,factorial = 1; // 3)
  printf("Enter a number to find its factorial:\n");
  scanf("%i",&number);

  for (i=2; i <= number; i++){
    factorial *= i;
  }
  printf("The factorial of %i is %i",number,factorial);
  */

  int i,input, sum=0, num_of_digits=0,temp; // Get sum of digits in number
  printf("Enter a number to find the sum of its digits:\n");
  scanf("%i",&input);
  temp = input;

  while(temp != 0) {
    temp /= 10;
    num_of_digits ++;
  }

  for (i=1;i <= num_of_digits;i++){
    sum += input % 10;
    input /= 10;
  }
  printf("%i", sum);

}
