#include <iostream>
using namespace std;

int main() {
  int n, a, z;
  cout << "Enter number: ";
  cin >> n;
  cout << "Enter starting number: ";
  cin >> a;
  cout << "Enter end number: ";
  cin >> z;

  cout << "\n\tMultiplication Table\n";
  for (int i = a; i <= z; i++) {
    cout << n << " * " << i << " = " << n * i << "\n";
  }

  return 0;
}
