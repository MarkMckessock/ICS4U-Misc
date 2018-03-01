#include <iterator>
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  // read ints from the standard input and append them to v
  copy(istream_iterator<int>(cin), istream_iterator<int>(),
   back_inserter(v));

   for(int i = 0; i<v.size();i++){
     cout << v[i] << endl;
   }

}
