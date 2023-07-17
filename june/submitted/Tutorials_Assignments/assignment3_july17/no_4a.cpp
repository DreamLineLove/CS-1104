#include <iostream>
using namespace std;

int find_factorial_recursively(int number) {
  if (number == 0) {
    return 1;
  } else {
    return number * find_factorial_recursively(number - 1);
  }
}

int main() {
  int number;
  cout << "Give a number: ";
  cin >> number;

  cout << "\nAnswer: " << find_factorial_recursively(number);

  return 0;
}
