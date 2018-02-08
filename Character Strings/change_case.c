#include <stdio.h>

char result[20];

int len(char str[]){
  int i = 0;
  while (str[i] != '\0'){
    i++;
  }
  return i;
}

void lower(char string[]){
  int i;
  for (i=0;i<len(string);i++){
    if (string[i] >= 'A' && string[i] <= 'Z'){
      string[i] += 32;
    }
    else if (string[i] >= 'a' && string[i] <= 'z'){
      continue;
    }
    else{
      printf("Invalid character.");
      break;
    }
  }
  // Return result
  for (i=0;i<len(string);i++){
    result[i] = string[i];
  }
}

void upper(char string[]){
  int i;
  for (i=0;i<len(string);i++){
    if (string[i] >= 'a' && string[i] <= 'z'){
      string[i] -= 32;
    }
    else if (string[i] >= 'A' && string[i] <= 'Z'){
      continue;
    }
    else{
      printf("Invalid character.");
      break;
    }
  }
  // Return result
  for (i=0;i<len(string);i++){
    result[i] = string[i];
  }
}

int main (void){
  char name[] = "DeStroy";
  lower(name);
  printf("Lower: %s\n",result);
  upper(result);
  printf("Upper: %s\n",result);
}
