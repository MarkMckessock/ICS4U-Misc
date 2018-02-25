//Default parameters allow for default values to be used when no value is specified

int do_math(int num_1=5,int num_2=6, int num_3=7){
  return num_1+num_2+num_3;
}
int main(void){
  std::cout << do_math(4,5);
  //Prints: 16 (4+5+7)
}
