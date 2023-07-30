#include <iostream>
#include <regex>
using namespace std;

enum Options { whole, once, multiple };

// Options option() {
//   regex patternWhole("whole", regex_constants::icase);
//   regex patternOnce("once", regex_constants::icase);
//   regex patternMulti("multi.?", regex_constants::icase);
// }

void printHelp(string name) {
  cout << "#\tThe pattern is\t"
       << "./program_name type" << endl;
  cout << "\nThree types are availabe: whole, once, and multi." << endl;
  cout << "-\twhole implements regex_match" << endl;
  cout << "-\tonce implements regex_search" << endl;
  cout << "-\tmulti implements sregex_iterator" << endl;
  cout << "\nExample:\t" << name << " whole" << endl;
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    cout << "#\tOne command line argument required!" << endl;
    printHelp(argv[0]);
  }
  if (argc > 2) {
    cout << "Only one command line argument accepted!" << endl;
    cout << "The pattern is\t"
         << "./program_name type" << endl;
    cout << "\nThree types are availabe: whole, once, and multi." << endl;
    cout << "\twhole implements regex_match" << endl;
    cout << "\tonce implements regex_search" << endl;
    cout << "\tmulti implements sregex_iterator" << endl;
    cout << "\nExample:\t" << argv[0] << " whole" << endl;
  }

  return 0;
}
