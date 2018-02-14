#include <stdio.h>

int main(void){
  int count = 27,x;
  int *int_pointer; //* defines the variable as a pointer. The * is the indirection operator.
  int_pointer = &count;//Points 'int_pointer' to the address (&) of count
  x = *int_pointer;  //Indirectly assigns the value of count to x.
  //printf("%i\n",x);

  count = 12; //Changing the value of the variable assigned to a pointer will result in the pointer displaying the new value.
  *int_pointer = 15; //Assigning a value to a pointer will assign the value to the variable it points to.
  //printf("count:%i x:%i pointer: %i",count,x,*int_pointer);


  /*Pointers to structures:*/
  struct example {
    int var;
  };

  struct example test;
  struct example *struct_pointer; //Pointer of type struct example
  struct_pointer = &test;

  (*struct_pointer).var = 7; //The brackets set the indirection operator (*) @ higher precendence that the struct operator (.)
  (*struct_pointer).var = 7; // can be written as:
  struct_pointer->var = 7;

  struct pointers {
    struct example *p1;
    int *p2;
  };

  struct pointers sub_pointers;
  sub_pointers.p1 = &test;
  sub_pointers.p1->var = 12;
  printf("%i   %i",test.var,(*sub_pointers.p1).var); //sub_pointers.p1->var could also be used

  
}
