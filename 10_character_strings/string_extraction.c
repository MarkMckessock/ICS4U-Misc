#include <stdio.h>

char result[10];

void extract_string(char string[], int start_index, int end_index){
  int i;
  for (i=start_index;i<end_index;i++){
    result[i-start_index] = string[i];
  }
result[end_index] = '\0';
}

int main (void){
  char name[] = "Hippopotamus";
  extract_string(name,3,6);
  printf("%s",result);
}
