#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i < n; i++) {
    cout << pow(n - 1, 2) + 1 << endl;
  }

  return 0;
}
