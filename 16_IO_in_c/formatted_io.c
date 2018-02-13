#include <stdio.h>

int main (void){
  //PRINTF
  int num = 583;
  printf("%5i\n",num);   //(5)Right justified number that takes 5 spaces
  printf("%-5i\n",num);  //(-5)Left justified number that takes 5 spaces
  printf("%.5i\n",num);  //(.)Fills blank spaces with 0s
  printf("%*i\n",-7,num);//(*)The first argument is the number of spaces for the value to occupy
  /* Printf Conversion Characters:
  u    unsigned int
  o    octal
  x    lower-case hex
  p    pointer
  n    stores the # of chars printed in the pointer at the corresponding argument.
  */

  //SCANF
  char buf[81];
  scanf ("%[^\n]", buf); //Stores a full line of text in the string 'buf'.
  //The \n char is still in the buffer an would need to be cleared
  printf("%s",buf);

  if (scanf("%s%s",s1,s2) != 2){ //Scanf returns the number of successfully scaned and assigned inputs.
    //An error has occured
  }


}
