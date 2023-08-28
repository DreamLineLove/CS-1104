#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[80];
  int i;

  strcpy(str, "this is a test!");
  cout << str << "\n";

  for (i = 0; str[i]; i++)
    str[i] = toupper(str[i]);
  cout << "\n" << str << "\n";

  return 0;
}
