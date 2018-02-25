#include <iostream>
#include "mean.h"
#include "person.h"

int main(void){
  int nums[3] = {1,2,3};
  std::cout << get_mean(nums,3) << std::endl;
  person mark = {"Mark",17};
  std::cout << mark.name << std::endl;
}

//This program is compiled by compiling both this file and mean.cpp
