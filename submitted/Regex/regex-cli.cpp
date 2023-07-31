// To-do
// add case-insensitive option
// add option: type in string or get data from .txt file

#include <iomanip>
#include <iostream>
#include <regex>
using namespace std;

enum Options { whole, once, multiple, none };

Options option(string arg1, string arg2, bool *is_icase);

void printHelp(string program);

void whole_matching(regex pattern, string str);

void once_matching(regex pattern, string str);

void multi_matching(regex pattern, string str);

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "!\tTwo command line arguments required!" << endl;
    printHelp(argv[0]);
    return 0;
  }

  if (argc > 3) {
    cout << "!\tOnly two command line argument accepted!" << endl;
    printHelp(argv[0]);
    return 0;
  }

  bool is_icase = false;
  Options chosen = option(argv[1], argv[2], &is_icase);
  if (chosen == none) {
    cout << "!\tPlease choose an existing option!" << endl;
    printHelp(argv[0]);
    return 0;
  }

  string patternStr, str;
  cout << "Please enter a pattern:\t";
  cin >> patternStr;
  cin.ignore();
  cout << "Please enter a string :\t";
  getline(cin, str);

  if (chosen == whole) {
    if (is_icase == true) {
      regex pattern(patternStr, regex_constants::icase);
      whole_matching(pattern, str);
    } else {
      regex pattern(patternStr);
      whole_matching(pattern, str);
    }
    return 0;
  } else if (chosen == once) {
    if (is_icase == true) {
      regex pattern(patternStr, regex_constants::icase);
      once_matching(pattern, str);
    } else {
      regex pattern(patternStr);
      once_matching(pattern, str);
    }
    return 0;
  } else if (chosen == multiple) {
    if (is_icase == true) {
      regex pattern(patternStr, regex_constants::icase);
      multi_matching(pattern, str);
    } else {
      regex pattern(patternStr);
      multi_matching(pattern, str);
    }
    return 0;
  }

  return 0;
}

Options option(string arg1, string arg2, bool *is_icase) {
  regex patternWhole("whole", regex_constants::icase);
  regex patternOnce("once", regex_constants::icase);
  regex patternMulti("\\bmulti(ple)?\\b", regex_constants::icase);
  regex patternYes("y", regex_constants::icase);
  regex patternNo("n", regex_constants::icase);

  if (regex_match(arg2, patternYes)) {
    *is_icase = true;
  } else if (regex_match(arg2, patternNo)) {
    *is_icase = false;
  } else {
    return none;
  }

  if (regex_match(arg1, patternWhole)) {
    return whole;
  } else if (regex_match(arg1, patternOnce)) {
    return once;
  } else if (regex_match(arg1, patternMulti)) {
    return multiple;
  }

  return none;
}

void printHelp(string program) {
  cout << endl;
  cout
      << "#\tThe pattern is"
      << "\n\t\t./program_name matching_option case_insensitive input_from_file"
      << endl;
  cout << "\n#\tThe case does not actually matter so long as the option is "
          "spelled correctly"
       << endl;
  cout << "\n1. Matching-Options" << endl;
  cout << "\twhole" << setw(40) << "implements regex_match" << endl;
  cout << "\tonce" << setw(42) << "implements regex_search" << endl;
  cout << "\tmulti (multiple)" << setw(33) << "implements sregex_iterator"
       << endl;
  cout << "\n2. Case_insensitivity" << endl;
  cout << "\ty" << setw(52) << "uses case-insensitive matching" << endl;
  cout << "\tn" << setw(60) << "does not use case-insensitive matching" << endl;
  cout << "\n3. Input From File?" << endl;
  cout << "\ty" << setw(51) << "later you specify a filename " << endl;
  cout << "\tn" << setw(50) << "later you type in the string" << endl;
  cout << "\nEXAMPLES" << endl;
  cout << "\t\t" << program << " whole ab?c{2} y n" << endl;
  cout << "\t\t" << program << " once ab?c{2} y n" << endl;
  cout << "\t\t" << program << " mULti ab?c{2} n y" << endl;
  cout << "\t\t" << program << " multiPLE ab?c{2} y y" << endl;
}

void whole_matching(regex pattern, string str) {
  cout << "\n\n\tRESULT" << endl;
  cout << "\t-------" << endl;
  cout << endl;
  if (regex_match(str, pattern)) {
    cout << "#\tMatch found!" << endl;
  } else {
    cout << "#\tNo match was found!" << endl;
  }
}

void once_matching(regex pattern, string str) {
  cout << "\n\n\tRESULT" << endl;
  cout << "\t-------" << endl;
  cout << endl;
  if (regex_search(str, pattern)) {
    cout << "#\tMatch found in given string!" << endl;
  } else {
    cout << "#\tNo match was found in given string!" << endl;
  }
}

void multi_matching(regex pattern, string str) {
  sregex_iterator itr(str.begin(), str.end(), pattern);
  sregex_iterator end;
  int count = 0;
  while (itr != end) {
    count++;
    itr++;
  }

  cout << "\n\n\tRESULT" << endl;
  cout << "\t-------" << endl;
  cout << endl;
  cout << "#\t" << count << " matches found in given string!" << endl;
}
