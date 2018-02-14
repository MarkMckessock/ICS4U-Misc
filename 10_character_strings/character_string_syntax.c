#include <stdio.h>

int main (void){
  char word_1[] = {"Mark"}; //These three methods are equivalent
  char word_2[] = "Mark"; // These three methods insert a \0 escape character after the string
  char word_3[] = {'M','a','r','k','\0'};
  int length_word = sizeof(word_1)/sizeof(word_1[0]);
  printf("%i",length_word);
  printf("%s",word_1); //Full strings can be printed with the %s specifier

}
