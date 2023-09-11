#include <fstream>
#include <iomanip>
#include <iostream>
#include <regex>
using namespace std;

enum Options { whole, once, multiple, none };

Options option(string arg1, string arg2, string arg3, bool *is_icase,
               bool *from_file);

void printHelp(string program);

void whole_matching(regex pattern, string str, bool from_file, ifstream &file);

void once_matching(regex pattern, string str, bool from_file, ifstream &file);

void multi_matching(regex pattern, string str, bool from_file, ifstream &file);

int main(int argc, char *argv[]) {
  if (argc < 4) {
    cout << "!\t3 command line arguments required!" << "\n";
    printHelp(argv[0]);
    return 0;
  }

  if (argc > 4) {
    cout << "!\tOnly 3 command line argument accepted!" << "\n";
    printHelp(argv[0]);
    return 0;
  }

  bool is_icase = false;
  bool from_file = false;
  Options chosen = option(argv[1], argv[2], argv[3], &is_icase, &from_file);
  if (chosen == none) {
    cout << "!\tPlease choose an existing option!" << "\n";
    printHelp(argv[0]);
    return 0;
  }

  string patternStr, str;
  cout << "Please enter a pattern:\t";
  cin >> patternStr;
  cin.ignore();

  if (from_file == false) {
    cout << "Please enter a string :\t";
    getline(cin, str);
  } else if (from_file == true) {
    cout << "Please enter a file name (including extension):\t";
    cin >> str;
  }

  ifstream file(str);

  if (chosen == whole) {
    if (is_icase == true) {
      regex pattern(patternStr, regex_constants::icase);
      whole_matching(pattern, str, from_file, file);
    } else {
      regex pattern(patternStr);
      whole_matching(pattern, str, from_file, file);
    }
    file.close();
    return 0;
  } else if (chosen == once) {
    if (is_icase == true) {
      regex pattern(patternStr, regex_constants::icase);
      once_matching(pattern, str, from_file, file);
    } else {
      regex pattern(patternStr);
      once_matching(pattern, str, from_file, file);
    }
    file.close();
    return 0;
  } else if (chosen == multiple) {
    if (is_icase == true) {
      regex pattern(patternStr, regex_constants::icase);
      multi_matching(pattern, str, from_file, file);
    } else {
      regex pattern(patternStr);
      multi_matching(pattern, str, from_file, file);
    }
    file.close();
    return 0;
  }

  file.close();
  return 0;
}

Options option(string arg1, string arg2, string arg3, bool *is_icase,
               bool *from_file) {
  regex patternWhole("whole", regex_constants::icase);
  regex patternOnce("once", regex_constants::icase);
  regex patternMulti("\\bmulti(ple)?\\b", regex_constants::icase);
  regex patternYes("y", regex_constants::icase);
  regex patternNo("n", regex_constants::icase);

  if (regex_match(arg3, patternYes)) {
    *from_file = true;
  } else if (regex_match(arg3, patternNo)) {
    *from_file = false;
  } else {
    return none;
  }

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
  cout << "\n";
  cout
      << "#\tThe pattern is"
      << "\n\t\t./program_name matching_option case_insensitive input_from_file"
      << "\n";
  cout << "\n#\tThe case does not actually matter so long as the option is "
          "spelled correctly"
       << "\n";
  cout << "\n1. Matching-Options" << "\n";
  cout << "\twhole" << setw(40) << "implements regex_match" << "\n";
  cout << "\tonce" << setw(42) << "implements regex_search" << "\n";
  cout << "\tmulti (multiple)" << setw(33) << "implements sregex_iterator"
       << "\n";
  cout << "\n2. Case_insensitivity" << "\n";
  cout << "\ty" << setw(52) << "uses case-insensitive matching" << "\n";
  cout << "\tn" << setw(60) << "does not use case-insensitive matching" << "\n";
  cout << "\n3. Input From File?" << "\n";
  cout << "\ty" << setw(51) << "later you specify a filename " << "\n";
  cout << "\tn" << setw(50) << "later you type in the string" << "\n";
  cout << "\nEXAMPLES" << "\n";
  cout << "\t\t" << program << " whole ab?c{2} y n" << "\n";
  cout << "\t\t" << program << " once ab?c{2} y n" << "\n";
  cout << "\t\t" << program << " mULti ab?c{2} n y" << "\n";
  cout << "\t\t" << program << " multiPLE ab?c{2} y y" << "\n";
}

void whole_matching(regex pattern, string str, bool from_file, ifstream &file) {
  cout << "\n\n\tRESULT" << "\n";
  cout << "\t-------" << "\n";
  cout << "\n";
  if (from_file != true) {
    if (regex_match(str, pattern)) {
      cout << "#\tMatch found!" << "\n";
    } else {
      cout << "#\tNo match was found!" << "\n";
    }
  } else {
    string line;
    int n = 0, count = 0;
    while (getline(file, line)) {
      if (regex_match(line, pattern)) {
        cout << "line" << n << "  (yes) \t\t" << line << "\n";
        count++;
      } else {
        cout << "line" << n << "  (no)  \t\t" << line << "\n";
      }
      n++;
    }
    cout << "\n\t"
         << "lines matched: " << count << "\n";
  }
}

void once_matching(regex pattern, string str, bool from_file, ifstream &file) {
  cout << "\n\n\tRESULT" << "\n";
  cout << "\t-------" << "\n";
  cout << "\n";
  if (from_file != true) {
    if (regex_search(str, pattern)) {
      cout << "#\tMatch found in given string!" << "\n";
    } else {
      cout << "#\tNo match was found in given string!" << "\n";
    }
  } else {
    string line;
    int n = 0, count = 0;
    while (getline(file, line)) {
      if (regex_search(line, pattern)) {
        cout << "line" << n << "  (yes) \t\t" << line << "\n";
        count++;
      } else {
        cout << "line" << n << "  (no)  \t\t" << line << "\n";
      }
      n++;
    }
    cout << "\n\t"
         << "matches found in " << count << " lines" << "\n";
  }
}

void multi_matching(regex pattern, string str, bool from_file, ifstream &file) {
  int count = 0;
  if (from_file != true) {
    sregex_iterator itr(str.begin(), str.end(), pattern);
    sregex_iterator end;
    while (itr != end) {
      count++;
      itr++;
    }
  }

  cout << "\n\n\tRESULT" << "\n";
  cout << "\t-------" << "\n";
  cout << "\n";

  if (from_file != false) {
    string line;
    int n = 0;
    while (getline(file, line)) {
      cout << "line" << n << "  (m=";

      sregex_iterator itr(line.begin(), line.end(), pattern);
      sregex_iterator end;

      int inner = 0;
      while (itr != end) {
        count++;
        inner++;
        itr++;
      }

      cout << inner << ") \t\t" << line << "\n";
      n++;
    }
  }

  cout << "\n#\t" << count << " matches found in given string!" << "\n";
}
