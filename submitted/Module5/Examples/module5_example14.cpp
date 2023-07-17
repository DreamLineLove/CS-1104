#include <iostream>
using namespace std;

void f(int *j);

int main() {
  int i;
  int *p;

  i = 10;
  cout << i << endl;

  p = &i;

  f(p);

  cout << i << endl;

  return 0;
}

void f(int *j) { *j = 100; }
