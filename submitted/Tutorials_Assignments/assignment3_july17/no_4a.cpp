#include <iostream>
using namespace std;

int factorial(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

int main() {
  int num;
  cout << "Give a number: ";
  cin >> num;

  cout << "\nAnswer: " << factorial(num) << endl;

  return 0;
}
