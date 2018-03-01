#include <stdio.h>
#define MAX_NUMS 100

int main (){
  int i;
  int A[MAX_NUMS] = {9,2,43,90,-4,7};
  int B[MAX_NUMS] = {-4,9,34,897,43};
  int nA = 6;
  int nB = 5;

  for (i = 0;i < nB;i++){
    A[nA+i] = B[i];
  }

  for(i = 0; i < nA + nB;i++){
    printf("%i ",A[i]);
  }
}
