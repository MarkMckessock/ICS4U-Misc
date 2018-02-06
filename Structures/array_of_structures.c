#include <stdio.h>

int main(void){
  struct person {
    int age;
    float height;
  }
  struct person family[4] = {{18,120},{16,105}}

  struct person friends[3] = {[0].age = 18,[0].height = 140}
}
