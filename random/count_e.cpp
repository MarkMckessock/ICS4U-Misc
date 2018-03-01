#include <stdio.h>

int main(void){
  char string[81];
  int i=0, e_count=0;

  printf("Enter a string:\n");
  gets(string);

  while(string[i] != '\0'){
    i++;
    if (string[i] == 'e' || string[i] == 'E')
      e_count++;
  }

  printf("There are %i e's in %s",e_count,string);
}
