//Removes and occurence of 'h' from a user entered string.
#include <stdio.h>

#define MAX_CHARS 100

char *strcpy(char *dest,char *src){
  int i = 0;
  while(src[i]){
    dest[i] = src[i];
    i++;
  }
  dest[i] = 0;
  return dest;
}

int main(){
  char input[MAX_CHARS];
  int i = 0;
  printf("Enter a string:\n");
  gets(input);

  while(input[i]){
    if (input[i] == 'h'){
      strcpy(&input[i],&input[i+1]);
      //break; //only needed to just remove one h.
    }
    else
      i++;

  }
  printf("String: %s",input);
}
