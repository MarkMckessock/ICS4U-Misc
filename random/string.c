//Self-written versions of c std sting functions.
#include <stdio.h>
#include <stdbool.h>

int strlen(char *str){
  int i = 0;
  while(str[i]){
    i++;
  }
  return i;
}

int strcmp(char *str_1, char *str_2){
  for(int i = 0; i < strlen(str_1); i++){
    if (str_1[i] != str_2[i]){
      return str_2[i] - str_1[i];
    }
  }
  return 0;
}

char *strcpy(char *dest,char *src){
  int i = 0;
  while(src[i]){
    dest[i] = src[i];
    i++;
  }
  dest[i] = 0;
  return dest;
}

char *strcat(char *dest,char *src){
  int dest_length = strlen(dest);
  int i = dest_length;
  while(src[i-dest_length]){
    dest[i] = src[i-dest_length];
    i++;
  }
  dest[i] = 0;
  return dest;
}

int main(){
  char str_1[10] = "DOG";
  char str_2[10] = "DOG";
  char dest[10];
  printf("Compare %s to %s return %i.\n",str_1,str_2,strcmp(str_1,str_2));
  printf("Lenght of string 1: %i. Length of string 2: %i.\n",strlen(str_1),strlen(str_2));
  printf("Copying %s to %i returns %s.\n",str_1,&dest,strcpy(dest,str_1));
  printf("Concatenating %s to %s",str_1,str_2);
  printf(" returns %s.",strcat(str_2,str_1));
}
