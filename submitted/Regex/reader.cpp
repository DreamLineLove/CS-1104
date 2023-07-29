#include <fstream>
#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "Enter name of the file: ";
  cin >> name;

  string line;
  ifstream file(name);

  while (getline(file, line)) {
    cout << line << endl;
  }
  file.close();

  return 0;
}
