#include <iostream>
using namespace std;

int sum(int n) {
  if (n <= 0) {
    return n;
  }

  return n + sum(n - 1);
}

int main() {
  cout << sum(5) << '\n';
  // cout << sumi(5) << '\n';

  return 0;
}
