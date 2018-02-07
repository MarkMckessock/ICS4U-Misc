#include <stdio.h>

int main (void) {
  char string[50];
  printf("Enter a string:\n")
  scanf("%s",string); //& is not used to accepting string input.
  printf("You typed: %s",string);

  //scanf("%s %s")
}
