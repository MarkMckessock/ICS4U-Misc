#include <stdio.h>

int main(void) {
  int n, triangle_number;
  triangle_number = 0;
  printf("Number:      Triangular Number:\n");

  for (n=1; n <= 200; n++){
    triangle_number += n;
    printf("%-3i      %i\n",n,triangle_number); // The negative makes the text left-alligned
    // replacing the negative with a period (%.3i) will will in blank spaces with leading zeros
  }

  return 0;
}
