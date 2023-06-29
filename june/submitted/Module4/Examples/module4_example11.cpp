#include <iostream>
using namespace std;

int main() {
  double x, y;
  int *p;

  x = 123.23;
  p = (int *)&x;

  y = *p;
  cout << y;

  return 0;
}
