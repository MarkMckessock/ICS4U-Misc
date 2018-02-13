#include <stdio.h>

int main (void){
  putchar('A'); //Output a single character to the terminal
  putchar('\n'); //Insert a new line

  getchar(); //Returns the first character in the keyboard buffer.
  //Recursive getchar() calling will return all the characters inputed into the terminal.
}
