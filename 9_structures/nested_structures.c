#include <stdio.h>
#include <stdbool.h>

int main(void){
  struct student{
    int age;
    bool passing;
  }

  struct class{
    struct student n;
  }

  struct class math;

  math.n.age = 15
  math.n.passing = true
}
