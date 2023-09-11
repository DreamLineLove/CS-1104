#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "This is a cat";
  char reverse_str[80];
  char capitalized_str[80];

  strcpy(reverse_str, str);
  strcpy(capitalized_str, str);

  int i, n = strlen(reverse_str);

  cout << "Original string" << '\n';
  cout << str << '\n';

  return 0;
}
