#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

struct person {
  std::string name;
  int age;
  double height;
};

//This function is called by the sort function and allows an array/vector of structs to be sorted, in this case alphebetically.
bool predicate (person person_1, person person_2){
  return person_1.name < person_2.name;
}

int main(){

  person person_1 = {"John",45};
  person person_2 = {"Tim", 20};

  std::vector<person> people;

  people.push_back(person_1);
  people.push_back(person_2);

  for(int i=0; i<people.size();i++)
    std::cout << people[i].name << std::endl;

  //sort(people.begin(),people.end()) doesnt work because the sort doesnt know which value to compare
  sort(people.begin(),people.end(),predicate);

  for(int i=0; i<people.size();i++)
    std::cout << people[i].name << std::endl;

}
