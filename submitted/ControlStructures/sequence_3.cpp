#include <iostream>
using namespace std;

void sum(int a, int b) { cout << a + b << "\n"; }
void difference(int a, int b) { cout << a - b << "\n"; }
void product(int a, int b) { cout << a * b << "\n"; }

int main() {
  int a = 5, b = 3;

  sum(a, b);
  difference(a, b);
  product(a, b);

  return 0;
}
