//The list type allows fast access to insert and remove elements because it does not provide random access.
//List iterators stay valid even after deleting or inserting elements into the list.
#include <list>
#include <string>
#include <iostream>

struct person {
  std::string name;
  int age;
};

bool compare(person person_1,person person_2){
  return person_1.age < person_2.age;
}

int main(){
  std::list<person> people;

  person _1 = {"mark",8};
  person _2 = {"tom",12};
  person _3 = {"andy",75};

  people.push_back(_1);
  people.push_back(_2);
  people.push_back(_3);

  //Lists can be sorted with the special list sorting member and a specified predicate.
  people.sort(compare);
  //Lists cannot be iterated with "iter < people.end()" because lists are not indexed.
  for (std::list<person>::iterator iter = people.begin(); iter != people.end();iter++){
    std::cout << iter->name << std::endl;
  }
}
