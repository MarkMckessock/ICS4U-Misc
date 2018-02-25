#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int len(char *str){
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

int main (int argc, char *argv[]){
  //NULL STATEMENT
  if (true)
    ; //Acts as a null statement; nothing is executed.

  //UNIONS
  union mixed {//The type 'mixed' can store either a char, int, or array of chars, but only 1 at a time.
    char c;
    int i;
    char ham[10];
  };
    //Example:
    int kTableEntries = 5;
    struct{
      char *name;
      //enum symbolType type; Can be used to define what type of data is with the 'data' union.
      union {
        int i;
        float f;
        char c;
      } data;
    } table [kTableEntries];

  //Commas
    int i,j;
    for (i=0,j=10;j<i;i++,j-=10){} //Commas can be used for multiple initializations

  //CLI Arguments
    //See 'main' function declaration
    //argc returns the number of arguments given (1 will always be the name of the program called)
    //argc returns a pointer to an array of pointers to character strings with argv[0] being the program name.
    //Example: if a program takes 2 args:
    if (argc != 2)
      printf("Expected 2 arguements, received %i",argc);
    char string[] = "hello";
    if (test_string_equality(argv[1],string) == 1)
      printf("Thank you");
    else {
      printf("%s",argv[1]);
    }

  //DYNAMIC MEMORY ALLOCATION
    //calloc and malloc
    int *array_pointer;
    array_pointer = (int *)calloc(sizeof(int),1000); //returns a pointer to a 1000 element array of 4 byte ints
    array_pointer = (int *)calloc(sizeof(int)*1000); //This is an equivalent pointer
    if (array_pointer == NULL){} //calloc and malloc return null pointers if assignment fails

    //free
    free(array_pointer); //releases the array and deletes it from memory.

    //realloc
    array_pointer = realloc(array_pointer,2000); //changes the size of the array @ array_pointer to 2000 bytes.
}
