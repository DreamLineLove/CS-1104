#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "The Rangoon College is the oldest college in Myanmar's "
               "education system and the best known college in Myanmar.";

  cout << str << "\n\n";

  regex pattern("Myanmar");

  string new_str = regex_replace(str, pattern, "Burma");
  cout << new_str << "\n";

  return 0;
}
