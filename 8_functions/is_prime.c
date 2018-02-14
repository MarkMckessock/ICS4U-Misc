#include <stdio.h>
#include <stdbool.h>

bool is_prime (int number_to_check){
  int i;
  bool prime = true;
  for (i=3; i < number_to_check; i +=2 ){
    if (number_to_check % i == 0){
      prime = false;
    }
  }
return prime;
}

int main (void){
  int num_1 = 7 , num_2 = 14;
  printf("%i is %i prime.\n",num_1,is_prime(num_1));
  printf("%i is %i prime.",num_2,is_prime(num_2));
}
