#include <stdio.h>
#include <stdbool.h>


char result [20];

int len(char str[]){
  int i = 0;
  while (str[i] != '\0'){
    i++;
  }
  return i;
}

int index (char string[], char substring[]){
  int i,j;
  for (i=0;i<len(string);i++){
    if (string[i] == substring[0]){
      bool found = true;
      for (j=0;j<len(substring);j++){
        if (string[i+j] != substring[j]){
          found = false;
        }
      }
      if (found) {
        return i;
      }
    }
  }
  printf("Substring not found");
  return 1;
}

void remove_string(char string[],char substring[]){
  int i;
  for (i=index(string,substring);i<len(string);i++){
    string[i] = string[i+len(substring)];
  }

  //Replace with return string
  for (i=0; i<len(string);i++){
    result[i] = string[i];
  }
}

void insert_string(char string[],char substring[],int sub_index){
  int i,len_string=len(string),len_substring=len(substring);
  char temp[len_string+len_substring];
  //Add string before insertion
  for (i=0; i<sub_index; i++){
    temp[i] = string[i];
  }
  // Insert substring
  for (i=sub_index;i<(sub_index+len_substring);i++){
    temp[i] = substring[i-sub_index];
  }
  // Add rest of string
  for (i=(sub_index+len_substring);i<(len_string+len_substring);i++){
    temp[i] = string[i-len_substring];
  }
  //Export result (replace with return string array)
  for (i=0;i<(sizeof(temp)/sizeof(temp[0]));i++){
    result[i] = temp[i];
  }
}

int main(void){
  char word[] = "racecar";
  char sub[] = "car";
  printf("String: %s  Substring: %s\n",word,sub);
  printf("Index of substring: %i\n",index(word,sub));
  remove_string(word,sub);
  printf("Remove substring: %s\n",result);
  insert_string(result,sub,0);
  printf("Insert substring at %i: %s",0,result);
}
