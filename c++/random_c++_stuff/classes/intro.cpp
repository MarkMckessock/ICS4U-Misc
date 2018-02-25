class Person{
  int birth_year;
  int get_age(int birth_year){ };
}
// Classes are private by default

struct Also_Person{
  int birth_year;
  int get_age(int birth_year){ };
}
//structs are public

Person mark; //creates a Person class called mark.
mark.get_age(); //Not permitted because class is private

Also_Person john;
john.get_age()
