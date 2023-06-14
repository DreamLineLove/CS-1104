#include <iostream>
using namespace std;

bool primeCheck(int n) {
  bool isPrime = true;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      isPrime = false;
    }
  }
  return isPrime;
}

int main() {

  bool isPrime = false;
  int n;
  cout << "What is the number? ";
  cin >> n;

  isPrime = primeCheck(n);
  if (isPrime) {
    cout << n << " is a prime number!";
  } else {
    cout << n << " is NOT a prime number!";
  }

  return 0;
}
