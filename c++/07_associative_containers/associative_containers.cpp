//Associative containers do not order their values sequentially.
//They are self-ordering so they cannot be sorted or manipulated.
//They are therefore more efficient for look-up.
#include <iostream>
#include <map>
#include <string>
using namespace std;
//The map container type allows items to be referenced by a key (python dictionary style)
//
int main(){
  string s;
  map<string,int> counters; //This container holds int values with string keys
  //The predicate for sorting a map can be supplied at declaration
  map<string,int> count(predicate);

  while(cin >> s){
    counters[s]++;
    }

  //We can access the keys and values of a map using a pair.
  //This pair has a string at pair.first and an int at pair.second.
  pair<string,int> test;
  //In non-sequential containers the condition must be !=.
  //Iterators to maps return pairs with the members: first representing the keys and second, the values.
  for(map<string,int>::const_iterator it = counters.begin(); it != counters.end();it++)
    cout << it->first << "\t" << it->second << endl;

}
