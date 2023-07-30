#include <iostream>
#include <regex>
using namespace std;

enum Options { whole, once, multiple, none };

Options option(string arg) {
  regex patternWhole("whole", regex_constants::icase);
  regex patternOnce("once", regex_constants::icase);
  regex patternMulti("\\bmulti(ple)?\\b", regex_constants::icase);

  if (regex_match(arg, patternWhole)) {
    return whole;
  } else if (regex_match(arg, patternOnce)) {
    return once;
  } else if (regex_match(arg, patternMulti)) {
    return multiple;
  }

  return none;
}

void printHelp(string program) {
  cout << "#\tThe pattern is\t"
       << "./program_name option" << endl;
  cout << "#\tThe case does not actually matter so long as the option is "
          "spelled correctly"
       << endl;
  cout << "\nThree OPTIONS are availabe: whole, once, and multi (or multiple)."
       << endl;
  cout << "-\twhole implements regex_match" << endl;
  cout << "-\tonce implements regex_search" << endl;
  cout << "-\tmulti (also multiple) implements sregex_iterator" << endl;
  cout << "\nEXAMPLES" << endl;
  cout << "\t" << program << " whole ab?c{2}" << endl;
  cout << "\t" << program << " mULti ab?c{2}" << endl;
  cout << "\t" << program << " multiPLE ab?c{2}" << endl;
}

void whole_matching(string pattern, string str) {
  regex patt(pattern);
  cout << "\n\n\tRESULT" << endl;
  cout << "\t-------" << endl;
  cout << endl;
  if (regex_match(str, patt)) {
    cout << "#\tMatch found!" << endl;
  } else {
    cout << "#\tNo match was found!" << endl;
  }
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    cout << "#\tOne command line argument required!" << endl;
    printHelp(argv[0]);
    return 0;
  }
  if (argc > 2) {
    cout << "#\tOnly one command line argument accepted!" << endl;
    printHelp(argv[0]);
    return 0;
  }

  Options chosen = option(argv[1]);
  if (chosen == none) {
    cout << "#\tPlease choose an existing option!" << endl;
    printHelp(argv[0]);
    return 0;
  }

  string pattern, str;
  cout << "Please enter a pattern: ";
  cin >> pattern;
  cin.ignore();
  cout << "Please enter a string: ";
  getline(cin, str);

  if (chosen == whole) {
    whole_matching(pattern, str);
    return 0;
  }

  cout << "never reached!" << endl;

  return 0;
}
