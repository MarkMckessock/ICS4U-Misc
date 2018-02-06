#include <stdio.h>

int input,temp,num_of_digits=0,current_digit,i,j;

//Calculate the value of an exponent
int power(int base,int exponent){
    if (exponent == 0)
      return 1;
  int result = base;
  for (j=1; j < exponent;j++){
    result *= base;
  }
  return result;
}

int main(void){
  printf("Please enter a number.\n");
  scanf("%i",&input);
  temp = input;

//Get the number of digits in the number
  while(temp != 0) {
    temp /= 10;
    num_of_digits ++;
  }

  for (i=1;i <= num_of_digits;i++){
    current_digit = input / power(10,((num_of_digits)-i));
    input -= power(10,((num_of_digits)-i))*current_digit;

    switch (current_digit) {
      case 0:
        printf("zero");
        break;
      case 1:
        printf("one");
        break;
      case 2:
        printf("two");
        break;
      case 3:
        printf("three");
        break;
      case 4:
        printf("four");
        break;
      case 5:
        printf("five");
        break;
      case 6:
        printf("six");
        break;
      case 7:
        printf("seven");
        break;
      case 8:
        printf("eight");
        break;
      case 9:
        printf("nine");
        break;
    }
    printf(" ");
  }

}
