#include <fstream>
#include <iostream>
#include <regex>
using namespace std;

int main() {
  // regex pattern("(fe)?male", regex_constants::icase);
  regex pattern("female");

  string name;
  cout << "Enter name of the file: ";
  cin >> name;

  cout << endl;

  string line;
  ifstream file(name);

  int i = 0, n = 0;
  while (getline(file, line)) {
    cout << i << ":\t" << line << endl;
    cout << regex_match(line, pattern);
  }

  file.close();

  cout << endl;
  cout << "There are " << n << " matches." << endl;

  return 0;
}
