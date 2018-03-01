#include <stdio.h>
#define MAX_CHARS 100

int len(char array[]){
  int i = 0;
  while(array[i]){
    i++;
  }
  return i;
}

int main(){
  int i;
  char s1[MAX_CHARS] = "anb";
  char s2[MAX_CHARS] = "y5878";
  int s1_len = len(s1);
  int s2_len = len(s2);
  
  for(i = s1_len;i<s1_len+s2_len+1;i++){
    s1[i] = s2[i-s1_len];
  }

  printf("%s",s1);
}
