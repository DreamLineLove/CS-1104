#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char sample[] = "This is a character array string in C++!";
  char sto1[50];
  char sto2[50];

  cout << strcpy(sto1, sample) << "\n";
  strcpy(sto2, "Yet another character array string in C++!");
  cout << sto2 << "\n";

  cout << strcat(sto1, sto2) << "\n";

  return 0;
}
