#include <stdio.h>

void concat (char str_1[], int str_1_length, char str_2[], int str_2_length, char result[]){
  int i;
  for (i=0;i<str_1_length;i++){
    result [i] = str_1[i];
  }
  result[str_1_length] = ' ';
  for (i = str_1_length+1; i < (str_1_length+1+str_2_length);i++){
    result[i] = str_2[i-(str_1_length+1)];
  }
}

void print_array(char array[], int array_length){
  int i;
  for (i=0;i<array_length;i++){
    printf("%c",array[i]);
  }
}

int main (void) {
  char first_name[] = {'M','a','r','k'};
  char last_name[] = {'M','c','k','e','s','s','o','c','k'};
  char full_name[14];

  concat(first_name,4,last_name,9,full_name);
  print_array(full_name,14);
}
