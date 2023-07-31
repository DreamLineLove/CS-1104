#include <fstream>
#include <iomanip>
#include <iostream>
#include <regex>
using namespace std;

void whole_matching(ifstream &file, regex pattern) {
  string line;
  while (getline(file, line)) {
    if (regex_search(line, pattern)) {
      cout << "yes\t" << line << endl;
    } else {
      cout << "no\t" << line << endl;
    }
  }
}

int main() {
  string name;
  cin >> name;

  regex pattern("\\bmale");

  ifstream file(name);
  whole_matching(file, pattern);
  file.close();

  return 0;
}
