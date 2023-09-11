#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "The Rangoon College is the oldest college in Myanmar's "
               "education system and the best known college in Myanmar.";

  cout << str << "\n\n";

  regex pattern("College");
  smatch match;

  if (regex_search(str, match, pattern)) {
    cout << match.str() << " found at position: " << match.position() << "\n";
  } else {
    cout << "no match" << "\n";
  }

  return 0;
}
