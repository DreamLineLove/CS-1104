#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a - b; }
int prod(int a, int b) { return a * b; }

int main() {
  int a = 5, b = 3;

  cout << "a = " << a << ", b = " << b << "\n";
  cout << "Sum: " << sum(a, b) << "\n";
  cout << "Diff: " << diff(a, b) << "\n";
  cout << "Prod: " << prod(a, b) << "\n";

  return 0;
}
