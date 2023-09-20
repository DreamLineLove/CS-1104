#include <iostream>
using namespace std;

int facti(int n);
int factr(int n);

int main() {
  cout << "factorial of 9 (iterative): " << facti(9) << '\n';
  cout << "factorial of 9 (recursive): " << factr(9) << '\n';

  return 0;
}

int facti(int n) {
  int result = 1;

  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

int factr(int n) {
  if (n == 1)
    return 1;

  return n * factr(n - 1);
}
