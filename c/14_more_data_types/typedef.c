#include <stdio.h>

int main(void){
  typedef struct {
    int num_1;
    int num_2;
    char name[10];
  } person; //Defines a struct that can be assigned using the name 'person'.

  person mark;
  mark.num_1 = 5;
  printf("%i",mark.num_1);
}
