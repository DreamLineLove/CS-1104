#include <iostream>
using namespace std;

int main() {
  cout << "\tMultiple Indirection" << "\n" << "\n";
  int x, *p, **q;

  x = 10;

  p = &x;

  q = &p;

  cout << " q: " << q << "\n";
  cout << " *q: " << *q << "\n";
  cout << " p: " << p << "\n";
  cout << " *p: " << *p << "\n";
  cout << " **q: " << **q << "\n";

  return 0;
}
