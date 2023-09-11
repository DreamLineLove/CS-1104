#include <iostream>
#include <iterator>
#include <regex>
using namespace std;

int main() {
  string str1 = "The Rangoon College is the oldest college in Myanmar's "
                "education system and the best known college in Myanmar.";
  cout << str1 << "\n" << "\n";

  regex p1("college");
  cout << "\"college\"" << "\n";

  cout << "-\tusing regex_match:\t";
  if (regex_match(str1, p1)) {
    cout << "yes" << "\n";
  } else {
    cout << "no" << "\n";
  }

  cout << "-\tusing regex_search:\t";
  if (regex_search(str1, p1)) {
    cout << "yes" << "\n";
  } else {
    cout << "no" << "\n";
  }

  sregex_iterator itr1(str1.begin(), str1.end(), p1);
  sregex_iterator end1;
  cout << "-\tusing sregex_iterator:\t";
  cout << distance(itr1, end1) << " times" << "\n";

  regex p2("college", regex_constants::icase);
  cout << "\n\"college\"\t\t\tFlag icase" << "\n";

  sregex_iterator itr2(str1.begin(), str1.end(), p2);
  sregex_iterator end2;
  cout << "-\tusing sregex_iterator:\t";
  cout << distance(itr2, end2) << " times" << "\n";

  cout << "\n\"Burma\"" << "\n";
  cout << "-\tusing regex_replace:\t\n\t";

  regex p3("Myanmar");
  string new_str = regex_replace(str1, p3, "Burma");
  cout << new_str << "\n";

  return 0;
}
