#include <cstring>
#include <iostream>
using namespace std;

void newline() { cout << "\n"; }

int main() {
  char sample[] = "This is a character array string in C++!";
  char sto1[50];
  char sto2[50];

  cout << strcpy(sto1, sample) << "\n";
  strcpy(sto2, "Yet another character array string in C++!");
  cout << sto2 << "\n";

  cout << strcat(sto1, sto2) << "\n";

  char str1[] = "string1";
  char str2[] = "string2";

  return 0;
}
