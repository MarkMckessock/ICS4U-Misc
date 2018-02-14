#include <stdio.h>

int main(void){
  struct list_element{
    int value;
    struct list_element *next_element;
  };

  struct list_element item_1,item_2,item_3,*list_start;
  item_1.value = 10;
  item_2.value = 15;
  item_3.value = 20;

  /* These pointers can be changed to remove and insert items in the list*/
  list_start = &item_1; // Points to the first item in the list.
  item_1.next_element = &item_2;
  item_2.next_element = &item_3;
  item_3.next_element = 0; //Assigns a 0 to the final pointer in the list.
  printf("%i",item_3.next_element);
  item_3.next_element = (struct list_element *) 0; // Equivalent to the preceeding assignments statement
  printf("%i", item_3.next_element);
}
