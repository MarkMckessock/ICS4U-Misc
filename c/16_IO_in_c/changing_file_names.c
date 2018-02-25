#include <stdio.h>

int main(void){
  rename("test_file.txt","new_file.txt");//Rename test_file to new_file. rename returns a non-zero value when the operation fails.
  remove("test_file.txt"); //Deletes the indicated new_file
  rename("new_file.txt","test_file.txt");
}
