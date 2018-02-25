#include <iostream>
#include <vector>
//Vectors act as containers that can hold an unknown number of objects
int main(void){
  std::vector<int> x;
  typedef std::vector<int>::size_type vec_sz; //Defines the type vec_sz to hold the size of a vector.

  int i;

  for(i=0;i<10;i++){
    x.push_back(i);
  }

  for(i=0;i<10;i++){
    std::cout << x[i];
  }
}
