#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str1 =
      "The art of programming is not just about knowing. Programming is about"
      "knowing clearly, completely, specifically and contextually.";
  cout << str1 << endl;

  regex p1("programming");

  cout << "programming" << endl;
  cout << "using regex_search:\t" << endl;
  if (regex_search(str1, p1)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  cout << "using regex_match:\t" << endl;
  if (regex_match(str1, p1)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}
