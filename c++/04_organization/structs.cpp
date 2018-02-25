#include <string>
using namespace std;

int main(){
  struct person {
    string name;
    int age;
    double height;
    person mother,father;
  };

  person mark = {"Mark Mckessock",17,170};

}
