#include <iostream>
using namespace std;

int main() {
  string str;

  cout << "Enter a string: ";
  getline(cin, str, '#');
  cout << "Here is your string: ";
  cout << str;

  return 0;
}
