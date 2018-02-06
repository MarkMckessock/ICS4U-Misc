#include <stdio.h>
#include <stdbool.h>

int main (void){
  struct example {
    int temperature;
    bool alive;
    float height;
  };
  struct example boy;
  boy.alive = true;
  boy.height = 65.2;
  printf("The boy is %f inches tall.",boy.height);

  struct init = {45,true,45.000};//Initialize structure
  struct init_2 = {.temperature = 45, .alive = false}

  init = (struct example) {25,true,25.000} //Post-declaration Initialization
  init_2 = (struct example) {.temperature = 45, .alive = false}

  struct test {
    int value;
  } name = {5}; //Declare the variable name of structure test and assigns the value of 5 to 'value'
}
