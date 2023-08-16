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

  for (int i = a; i <= z; i++) {
    cout << n << " * " << i << " = " << n * i << endl;
  }

  return 0;
}
