#include <iostream>
#include <iterator>
#include <regex>
using namespace std;

int main() {
  // string str1 =
  //     "The art of programming is not just about knowing. Programming is
  //     about" " knowing clearly, completely, specifically and contextually.";
  string str1 = "The Rangoon College is the oldest college in Myanmar's "
                "education system and the best known college in Myanmar.";
  cout << str1 << endl << endl;

  regex p1("college");
  cout << "\"college\"" << endl;

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

  sregex_iterator itr1(str1.begin(), str1.end(), p1);
  sregex_iterator end1;
  cout << "-\tusing sregex_iterator:\t";
  cout << distance(itr1, end1) << " times" << endl;

  regex p2("college", regex_constants::icase);
  cout << "\n\"college\"\t\t\tFlag icase" << endl;

  sregex_iterator itr2(str1.begin(), str1.end(), p2);
  sregex_iterator end2;
  cout << "-\tusing sregex_iterator:\t";
  cout << distance(itr2, end2) << " times" << endl;

  return 0;
}
