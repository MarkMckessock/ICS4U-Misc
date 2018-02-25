#include <stdio.h>

int blank(void){
  return 0;
}
int main(void){
  int (*p_blank) (void);
  p_blank = blank; //Defines a pointer to the function 'blank'
  //Pointers to functions are often used to pass them as arguments
}
