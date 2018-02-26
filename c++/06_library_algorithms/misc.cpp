#include <algorithm>
#include <vector>
#include <numeric> //std::accumulate()
#include <iostream>

int add_2(int num){
  return num + 2;
}

bool is_zero(int num){
  return num == 0;
}

int main(){
  std::vector<int> vec;
  std::vector<int> vec_2;

  vec.push_back(0);
  vec.push_back(2);
  vec.push_back(0);

  vec.empty();//returns true when vec is empty.

  //transform applies the function add_2 to every value in the range.
  transform(vec.begin(),vec.end(),std::back_inserter(vec),add_2);

  //accumulate returns the sum of values in the given range, starting at the value given by the third argument.
  float vec_mean = accumulate(vec.begin(),vec.end(),0.0)/vec.size(); //0.0 means the sum is treated as a float.



  //Removes all values of 0 from vec and copies all other values to a new container
  remove_copy(vec.begin(),vec.end(),back_inserter(vec_2),2);

  //Print full vector
  for(std::vector<int>::iterator it = vec.begin(); it < vec.end(); it ++)
    std::cout << *it << std::endl;

  std::cout << std::endl;

  //Print vector with all 2s removed.
  for(std::vector<int>::iterator it = vec_2.begin(); it < vec_2.end();it++)
    std::cout << *it << std::endl;

  //copies all elements in the given range to the iterator except those that cause the predicate to return true
  remove_copy_if(vec.begin(),vec.end(),back_inserter(vec_2),is_zero);

  //the partition algo alligns elements at the beginning or end of a container according to the predicate.
  //stable_partition maintains element order within the split partitions,
  //any 0 will be put at the beginning of the container, while other elements will be placed after.
  stable_partition(vec.begin(),vec.end(),is_zero)
}
