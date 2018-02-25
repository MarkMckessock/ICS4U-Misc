#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
  std::vector<int> x;
  int i;
  for (i=10;i>0;i--){
    x.push_back(i);
  }
  
  sort(x.begin(),x.end());

  for (i=0;i<10;i++){
    std::cout << x[i];
  }
}
