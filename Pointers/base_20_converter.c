#include <stdio.h>

//Get length of a string
int len(char *str){
  int i = 0;
  while (str[i] != '\0'){
    i++;
  }
  return i;
}

//Convert any characters in a base>9 number to digits
void convert_chars_to_ints(char *string){
  int i;
  for (i=0;i<len(string);i++){
    if (string[i] >= 'A' && string[i] <= 'Z'){
      string[i] -= ('A' - 10);
    }
    else if (string[i] >= '0' && string[i] <= '9'){
      string[i] -= ('0');
    }
  }
}

//Convert ints > 9 in numbers to letters
void convert_ints_to_chars(char *string){
  int i;
  for (i=0;i<len(string);i++){
    if (string[i] > 9 && string[i] < 30){
      string[i] += ('A'-10);
    }
    else if (string[i] > 0 && string[i] <= 9)
      string[i] += '0';
  }
}

//Reverse the items in a string
void reverse_string(char *string){
  int i,temp;
  for (i=0;i<(len(string)/2);i++){
    temp = string[i];
    string[i] = string[len(string)-i-1];
    string[len(string)-i-1] =temp;
  }
}

void add_strings(char *n1, char *n2, int base,char *ans){
  int i,len_n1,len_n2,carry=0;
  char *longest_string,*shortest_string;

  convert_chars_to_ints(n1);
  convert_chars_to_ints(n2);
  // printf("%i\n",len(n1));
  // for (i=0;i<len(n1);i++)
  //   printf("n1: %i n2:%i\n",n1[i],n2[i]);
  len_n1 = len(n1);
  len_n2 = len(n2);

  // Find the longest and shortest strings
  if (len_n1 > len_n2){
    longest_string = n1;
    shortest_string = n2;
  }
  else
    longest_string = n1;
    shortest_string = n2;

  for (i=0;i<=len(longest_string);i++){

    if (i < len(shortest_string)){ // Adding both strings
      //printf("N1: %i N2: %i sum: %i carry %i\n",n1[len_n1-1-i],n2[len_n2-1-i],n1[len_n1-1-i]+n2[len_n2-1-i]+carry,carry);
      if ((n1[len_n1-1-i]+n2[len_n2-1-i]+carry) <= (base-1)){ //Check that the addition is less than 19.
          ans[i] = (n1[len_n1-1-i]+n2[len_n2-1-i]+carry);
          carry = 0;
      }
      else {
        if (n1[len_n1-1-i]+n2[len_n2-1-i]+carry-base == 0) //If the value is 0, insert '0' or it will be interpreted as a null character.
          ans[i] = '0';
        else{
          ans[i] = (n1[len_n1-1-i]+n2[len_n2-1-i]+carry-base);
        }
        carry = 1;
      }
    }

    if (i >= len(shortest_string)){ // Adding only the longer string
      if ((longest_string[len(longest_string)-1-i]+carry) <= (base-1)){
        ans[i] = longest_string[len(longest_string)-1-i] + carry;
        if (ans[i] == 0 && i == len(longest_string)) {// If there is no carry in the last digit set it to termination char
          ans[i] = '\0';
        }
        else if (ans[i] == 1 && i == len(longest_string)) //If there is carry over set the next digit to terminator.
          ans[i+1] = '\0';
        carry = 0;
      }
      else {
        if (n1[len_n1-1-i]+n2[len_n2-1-i]+carry-base == 0) //If the value is 0, insert '0' or it will be interpreted as a null character.
          ans[i] = '0';
        else{
          ans[i] = (longest_string[len(longest_string)-1-i]+carry-base);
        }
        carry = 1;
      }
    }
  }
  convert_ints_to_chars(ans);
  reverse_string(ans);
}

int main(void){
  int base = 20,i;
  char num1[] = "HA2G3H";
  char num2[] = "I3BC";
  char result[20];
  char *n1 = num1,*n2=num2,*ans=result;
  add_strings(n1,n2,base,ans);
  printf("%s",result);
}
