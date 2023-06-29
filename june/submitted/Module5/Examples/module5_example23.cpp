#include <iostream>
using namespace std;

void sqr_it(int *i);

int main() {
  int x, *y;

  x = 10;
  y = &x;
  cout << *y << " squared is ";
  // Error! Type mismatch1
  // sqr_it(x);
  sqr_it(y);
  cout << x << endl;

  return 0;
}

void sqr_it(int *i) { *i = *i * *i; }
