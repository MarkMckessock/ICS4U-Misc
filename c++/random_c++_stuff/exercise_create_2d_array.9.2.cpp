#include <iostream>

int main(void){
  int n = 5,i,j;
  int **array = new int *[n]; //Create an array of pointers

  for (i=0;i<n;i++){
      array[i] = new int[n]; //Create an array of pointers at each pointer
  }

  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      array[i][j] = i*n+j;
    }
  }

  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      std::cout << array[i][j] << " ";
    }
    std::cout << std::endl;
  }

  delete [] array;
}
