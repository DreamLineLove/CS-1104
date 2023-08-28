#include <iostream>
using namespace std;

int factr(int n);
int fact(int n);

int main() {
  cout << "4 factorial is " << factr(4);
  cout << "\n";

  cout << "4 factorial is " << fact(4);
  cout << "\n";

  return 0;
}

// Recursive version
int factr(int n) {
  int answer;
  if (n == 1)
    return (1);
  answer = factr(n - 1) * n;
  return (answer);
}

// Iterative version
int fact(int n) {
  int t, answer;

  answer = 1;
  for (t = 1; t <= n; t++)
    answer = answer * (t);
  return (answer);
}
