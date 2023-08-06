#include <iostream>
#include <iterator>
#include <regex>
using namespace std;

int main() {
  string str = "... sample ... Sample ... example ... "
               "... Sample ... sample ... preamble ...";

  cout << str << "\n\n";

  regex pattern("(s|ex|pre)am[pb]le", regex_constants::icase);

  sregex_iterator begin(str.begin(), str.end(), pattern);
  sregex_iterator end;

  int count = distance(begin, end);
  cout << "matched " << count << " time\n";

  while (begin != end) {
    smatch match = *begin;
    cout << match.str() << " found at position: " << match.position() << endl;
    begin++;
  }

  return 0;
}
