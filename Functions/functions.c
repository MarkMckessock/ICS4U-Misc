#include <stdio.h>

void get_value(int test){ //Does not return a value.

}

//Does not work because arrays become pointers when passed
/*int get_length_of_array(int value[]){
  int size;
  size = sizeof(value)/sizeof(value[0]);
  return size;
}
*/
int main(void){
  int cats[10];
  int array_length = get_length_of_array(cats);
  printf("%i",array_length);

  return
}
