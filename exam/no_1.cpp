#include <iostream>
using namespace std;

int facti(int n) {
  int result = 1;

  for (int i = 1; i <= n; i++) {
    result = result * i;
  }

  return result;
}

int factr(int n) {
  if (n == 1)
    return 1;

  return n * factr(n - 1);
}

int main() {
  cout << "9 factorial is " << facti(9) << " (iterative)\n";
  cout << "9 factorial is " << factr(9) << " (recursive)\n";

  return 0;
}
