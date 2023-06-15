#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
  const int size = 80;
  char fullname[size];
  cout << "Wie ist dein Name? ";
  fgets(fullname, size, stdin);
  cout << "\n\t" << fullname << endl;

  return 0;
}
