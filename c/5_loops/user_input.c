#include <stdio.h>
  int number = 12,guess;

int main(void) {
  printf("Guess a number:\n");
  scanf("%i",&guess);
  printf("You guessed: %i\n",guess);
  return 0;
}
