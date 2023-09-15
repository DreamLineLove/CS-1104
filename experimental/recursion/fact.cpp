#include <iostream>
using namespace std;

int fact(int n) {
  if (n == 1)
    return 1;

  return n * fact(n - 1);
}

int facti(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

int main() {
  cout << fact(5) << '\n';
  cout << facti(5) << '\n';

  return 0;
}
