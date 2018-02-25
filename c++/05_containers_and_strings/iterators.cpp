#include <vector>
#include <iostream>
#include <string>

int main(){
  struct test {
    std::string name;
  };
  std::vector<int> list;
  std::vector<test> list_2;
  list.push_back(4);
  list.push_back(5);
  list.push_back(6);
  test mark = {"Tom"};
  test jack = {"Randy"};
  test greg = {"paul"};

  list_2.push_back(mark);
  list_2.push_back(jack);
  list_2.push_back(greg);

  for(int i=0; i<list.size();i++){
    std::cout << list[i] << std::endl;
  }
  for(int i=0; i<list_2.size();i++){
    std::cout << list_2[i].name << std::endl;
  }

  //The same effect can be acheived more efficiently using an iterator.
  //The const_iterator type is used because its value will not be modified.
  for(std::vector<int>::const_iterator iter = list.begin(); iter < list.end(); iter++){
    std::cout << (*iter) << std::endl;
  }

  for(std::vector<test>::const_iterator iter = list_2.begin(); iter < list_2.end(); iter++){
    std::cout << iter->name << std::endl;
    //The '->' operator is a shortcut for (*iter).name
  }
}
