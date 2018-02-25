#include <stdio.h>

int main(void) {
  int temp_in_farenheit = 27,temp_in_celcius;
  temp_in_celcius = (temp_in_farenheit - 32) / 1.8;
  printf("27 degrees farenheit is %i degrees celsius", temp_in_celcius);
  return 0;
}
