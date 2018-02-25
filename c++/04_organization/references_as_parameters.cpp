#include <iostream>
#include <string>
//Using the & symbol creates a reference to my_name, so the overhead of copying the variable is eliminated
// Non-const references allow the referenced variable to be manipulated from the function.
int do_stuff(const std::string& name, std::string& name_2){
  std::cout << name;
  name_2 = "cat";
}

int main(void){
  std::string my_name = "mark";
  std::string animal = "dog";
  do_stuff(my_name,animal);
  std::cout << animal;
}
