#include <stdio.h>

int main(void){
  enum animals {horse, pig=5, dog}; // Any variable of type animals can only have these values
  enum animals pet;
  pet = horse; // The value of 0 will be stored in pet because horse is the first element of animals
  pet = pig;// Assigning a variable to pig will store the value of 5
  pet = dog; //Pet will now have a value of 6 because it is 1 element after pig with a value of 5.
}
