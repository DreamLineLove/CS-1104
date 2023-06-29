#include <iostream>
using namespace std;

int main() {
  cout << "\tMultiple Indirection" << endl << endl;
  int x, *p, **q;

  x = 10;

  p = &x;

  q = &p;

  cout << " q: " << q << endl;
  cout << " *q: " << *q << endl;
  cout << " p: " << p << endl;
  cout << " *p: " << *p << endl;
  cout << " **q: " << **q << endl;

  return 0;
}
