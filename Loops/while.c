  #include <stdio.h>
  #include <stdbool.h> //Allows use of  'true' in while functions

  int main (void) {
    int count = 1;

    while(count<=5) {
      printf("Count %i\n",count);
      count++;
    }
    while(true) {
      printf("%i\n",count);
      break;
    }
  }
