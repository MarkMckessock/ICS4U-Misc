#include <stdio.h>

int get_sum_of_array(int rows,int array[rows]){
  int i,sum=0;
  for (i=0;i < rows;i++){
    sum += array[i];
  }
  return sum;
}

int main (void){
  int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
  printf("The sum of the array is %i.",get_sum_of_array((sizeof(numbers)/sizeof(numbers[0])),numbers));
}
