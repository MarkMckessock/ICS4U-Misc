#include <iostream>
#include <string>

int main(void){
  std::cout << "Please enter your name." << std::endl;

  std::string name; //Defines a string called name.
  std::cin >> name;

  std::cout << "Hello " << name << ", how are you?";
  return 0;
}
