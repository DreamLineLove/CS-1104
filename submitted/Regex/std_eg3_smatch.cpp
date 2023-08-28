#include <iostream>
#include <iterator>
#include <regex>
using namespace std;

int main() {
  string str = "The Rangoon College is the oldest college in Myanmar's "
               "education system and the best known college in Myanmar.";

  cout << str << "\n\n";

  regex pattern("College", regex_constants::icase);

  sregex_iterator begin(str.begin(), str.end(), pattern);
  sregex_iterator end;

  int count = distance(begin, end);
  cout << "matched " << count << " time\n";

  while (begin != end) {
    smatch match = *begin;
    cout << match.str() << " found at position: " << match.position() << "\n";
    begin++;
  }

  return 0;
}
