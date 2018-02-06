#include <stdio.h>

int main (void){
  float values[10] = {0,1,2,3,4,5,6,7,8,9},sum=0.00,average;
  int i;

  for (i=0; i < 10;i++){
    sum += values[i];
  }
  
  average = sum/10;
  printf("The average is %f",average);
  return 0;
}
