#include <stdio.h>

int fish = 5; //This variable can be referenced from 'string_functions.c'

static int cat = 7; //This variable can only be referenced from within this file.

int len(char *str); //This function is included in 'string_functions.c' and they are compiled together.

int main (void) {
  char name[] = "Mark";
  printf("%i",len(name));
}
