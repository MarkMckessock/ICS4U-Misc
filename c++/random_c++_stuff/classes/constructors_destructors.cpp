// CONSTRUCTORS //
class Animal{
  int feet;
  bool has_tail;
public:
  Animal(void){
    // Constructor if no arguments are given
    int *x = new int;
  }
  /*
  Animal(int feet_count,bool tail){
    feet = feet_count;
    has_tail = tail;
  }
  */  
  //The above constructor can be rewritten as:
  Animal(int feet_count,bool tail) : feet(feet_count),has_tail(tail){}
  ~Animal(){ //Destructors are used to free elements allocated by the class.
    delete x;
  }
}

int main(void){
  Animal dog; //Creates Animal with no parameters
  Animal cat(4,true); //Create Animal with parameters: feet = 4 and has_tail = true.
}
