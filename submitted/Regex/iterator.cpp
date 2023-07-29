#include <iostream>
#include <regex>
using namespace std;

int main() {
  regex pattern("female", regex_constants::icase);
  string str = "female Female female Female";

  sregex_iterator itr(str.begin(), str.end(), pattern);
  sregex_iterator end;

  cout << "using regex_match: " << regex_match(str, pattern) << endl;
  cout << "using regex_search: " << regex_search(str, pattern) << endl;

  int count = 0;
  while (itr != end) {
    count++;
    itr++;
  }

  cout << "using sregex_iterator class: " << count << endl;

  return 0;
}
