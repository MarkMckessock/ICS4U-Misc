#include <stdio.h>

int main(void){
  FILE *test_file;
  test_file = fopen("test_file.txt","r"); //"r+","w+","a+" modes are also supported
  char line[81];
  fgets(line,80,test_file);//Reads up to 81 characters from test_file and stores in line.
  //fgets will stop if it reaches a newline character. This char is stored in the string.
  fclose(test_file); //Close file.

  test_file =fopen("test_file.txt","w");
    fputs(line,test_file);//Writes the chars in the referenced pointer to the file.
  fclose(test_file);

  test_file =fopen("test_file.txt","r");
  char c;
  c = getc(test_file); //Get a single char from the input file. Outputs EOF @ end of file.

  test_file =fopen("test_file.txt","a");
  putc('\n',test_file); // Insert a new line.
  fprintf(test_file,"Goodbye world.");
  fclose(test_file);

  test_file = fopen("test_file.txt","r");
  if (feof(test_file)) //Returns true if the end of the file has been read past.
    printf("EOF reached");
  fclose(test_file);









}
