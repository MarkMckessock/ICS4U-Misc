#include <stdio.h>

int main(void){
  char name[] = "Mark";
  char *p_name = &(name[2]); //Pointers to arrays do not require the use of the address operator
  printf("%i",p_name-name); //If p_name points to name[2], p - name will return the index of p_name, 2.
  //*p_name references item 0 in the array 'name'
  //*(p_name + 2) can be used to reference name[2]

  //p_name += 1 will now make p_name reference name[1]

  //p_name >= &name[2] will test if p_name points past the third element in the array  
}
