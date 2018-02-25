#include <stdexcept>
#include <string>
#include <iostream>

void greet(std::string name){
  if (name == "mark"){
    throw std::domain_error(name + " is a dumn name.");
  }
}

int main(void){
  std::string name = "mark";
  try{
    greet(name);
  }
  catch(std::domain_error e){//holds the exception string.
    std::cout << "Exception: " << e.what();
  }
}
