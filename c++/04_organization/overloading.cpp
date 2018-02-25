#include <iostream>
#include <string>

int get_sum(int num_1,int num_2){
  std::cout << "Calculate sum of ints." << std::endl;
  return num_1 + num_2;
}

int get_sum(float num_1,float num_2){
  std::cout << "Calculating sum of floats." << std::endl;
  return (int)num_1+(int)num_2;
}
//Which get_sum function to call will be determined by the type of the arguments.
int main(){
  std::cout << get_sum((float)4.5,(float)5.5) << std::endl;
  std::cout << get_sum(6,7) << std::endl;
}
