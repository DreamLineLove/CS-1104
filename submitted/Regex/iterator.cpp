#include <iostream>
#include <regex>
using namespace std;

int main() {
  regex pattern("female");
  string str = "female Female female Female";

  cout << "using regex_match: " << regex_match(str, pattern) << endl;
  cout << "using regex_search: " << regex_search(str, pattern) << endl;

  return 0;
}
