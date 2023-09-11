#include <iostream>
using namespace std;

int facti(int n);
int factr(int n);

int main() {
  cout << "9 factorial is " << facti(4) << " (iterative)\n";
  cout << "9 factorial is " << factr(4) << " (recursive)\n";

  return 0;
}

int facti(int n) {
  int result = 1;
  for (int i = result; i <= n; i++) {
    result = result * i;
  }
  return result;
}

int factr(int n) {
  int result;
  if (n == 1)
    return 1;

  result = factr(n - 1) * n;
  return result;
}
