#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, b;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i < n; i++) {
    int a = pow((n - 1), 2);
    b = a + 1;
  }

  cout << "The result is " << b << "\n";

  return 0;
}
