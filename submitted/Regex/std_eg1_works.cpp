#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "College";

  cout << str << "\n\n";

  regex pattern("College");

  if (regex_match(str, pattern)) {
    cout << "match" << endl;
  } else {
    cout << "no match" << endl;
  }

  return 0;
}
