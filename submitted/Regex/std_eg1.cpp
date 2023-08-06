#include <iostream>
#include <iterator>
#include <regex>
using namespace std;

int main() {
  string str1 =
      "The art of programming is not just about knowing. Programming is about"
      " knowing clearly, completely, specifically and contextually.";
  cout << str1 << endl << endl;

  regex p1("programming");
  cout << "\"programming\"" << endl;

  cout << "-\tusing regex_match:\t";
  if (regex_match(str1, p1)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  cout << "-\tusing regex_search:\t";
  if (regex_search(str1, p1)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  auto begin1 = sregex_iterator(str1.begin(), str1.end(), p1);
  auto end1 = sregex_iterator();
  cout << "-\tusing sregex_iterator:\t";
  cout << distance(begin1, end1) << " times" << endl;

  regex p2("programming", regex_constants::icase);
  cout << "\"programming\"\t\t\tFlag icase" << endl;

  auto begin2 = sregex_iterator(str1.begin(), str1.end(), p1);
  auto end2 = sregex_iterator();
  cout << "-\tusing sregex_iterator:\t";
  cout << distance(begin2, end2) << " times" << endl;

  return 0;
}
