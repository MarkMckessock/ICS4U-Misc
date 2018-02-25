namespace values {
  int x = 5;
  int y = 4;
}

namespace players {
  int x = 21;
  int y = 47;
}

int main(void){
  std::cout << players::x << values::x;
  //Prints: 215
}
