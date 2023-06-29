#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  char str[80];

  cout << "Enter a string: ";
  fgets(str, 80, stdin);
  cout << "Here is your string: ";
  cout << str;

  return 0;
}
