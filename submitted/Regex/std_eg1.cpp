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

  cout << "-\tusing regex_match:\t";
  if (regex_match(str1, p1)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  cout << "programming" << endl;
  cout << "-\tusing regex_search:\t";
  if (regex_search(str1, p1)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  auto begin = sregex_iterator(str1.begin(), str1.end(), p1);
  auto end = sregex_iterator();
  cout << "-\tusing regex_search:\t";
  cout << distance(begin, end) << " times" << endl;

  return 0;
}
