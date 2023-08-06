#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "The Rangoon College is the oldest college in Myanmar's "
               "education system and the best known college in Myanmar.";

  cout << str << "\n\n";

  regex pattern("College");

  if (regex_search(str, pattern)) {
    cout << "match" << endl;
  } else {
    cout << "no match" << endl;
  }

  return 0;
}
