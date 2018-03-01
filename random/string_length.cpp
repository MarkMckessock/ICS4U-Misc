#include <iostream>
#include <string>

int main(){
  std::string name;
  std::cout << "Enter your name: " << std::endl;
  getline(std::cin,name);
  std::cout << "There are " << name.size() << " characters in \"" << name << "\"." << std::endl;
}
