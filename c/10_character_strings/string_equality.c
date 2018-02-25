#include <stdio.h>
#include <stdbool.h>

int len(char str[]){
  int i = 0;
  while (str[i] != '\0'){
    i++;
  }
  return i;
}

bool test_string_equality(char *str_1, char *str_2){
  bool string_equal = true;
  int i;
  if (len(str_1) == len(str_2)){
    for (i=0;i<len(str_1);i++){
      if (str_1[i] != str_2[i]){
        string_equal = false;
      }
    }
  }
  else
    string_equal = false;
  return string_equal;
}

int main (void) {
  char string_1[] = "Mark";
  char string_2[] = "Mark!";

  printf("%s is %i equal to %s.",string_1,test_string_equality(string_1,string_2),string_2);
}
