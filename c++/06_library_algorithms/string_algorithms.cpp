#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

int main(){
  std::vector<std::string> strings;
  //back_inserter returns an itertor to the end of a container
  //std::vector<int>::iterator iter = back_inserter(numbers);

  strings.push_back(" ");
  strings.push_back("c at");
  strings.push_back("fish");

  for(std::vector<std::string>::iterator it = strings.begin(); it < strings.end();it++){
  //find_if returns the iterator to the first value in the range begin-end that returns true.
    std::cout << "Searching \"" << *it << "\"" << std::endl;
    std::string::iterator iter = std::find((*it).begin(),(*it).end(),' ');
    if (iter != (*it).end())
      std::cout << "Found ' ' " << *iter << *(iter + 1) << std::endl;
}
  //The scan algorithm takes the elements in the range from begin to end and copies them, beginning at result.
  //running std:copy(begin,end,numbers.end()) fails because there is no element at numbers.end()
  std::copy(strings.begin(),strings.end(),back_inserter(strings));

  //substring takes an index of the first element and the length of the substring
  std::string name = "mark ";
  std::string str = name.substr(2,2);

  //the equals function compares two sequences to determine if they are the same.
  //the function campares whether the range begin-end is equal to the range rbegin-rend.
  //The function assumes the two sequences are of the same length.
  //the rbegin iterator starts at the end of the container and iterates backwards.
  //bool is_equal = std::equal(name.begin(),name.end(),name.rbegin());


  //the find function returns an iterator to the first occurence of its third arugment in the range of begin-end.
  //if it is not found, find returns its second argument.
  std::string::iterator loc = std::find(name.begin(),name.end(),'m');
  std::cout << *loc << std::endl;

  //search function takes two pairs of iterators. The first two delimit the sequence in which to search.
  //The second two denote the sequence to search for. If the search fails it returns the second iterator.
  std::string sub_string = "ark";
  std::string::iterator location = std::search(name.begin(),name.end(),sub_string.begin(),sub_string.end());
  std::cout << *location << std::endl;
}
