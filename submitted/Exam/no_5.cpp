#include <iostream>
using namespace std;

void nonstatic();
void staticfn();

int main() {
  for (int i = 1; i <= 3; i++) {
    nonstatic();
    staticfn();
  }
  return 0;
}

void staticfn() {
  static int value = 3;
  cout << "static " << value - 2 << ": " << value << '\n';
  value++;
}

void nonstatic() {
  int value = 3;
  cout << "nonstatic: " << value << '\n';
  value++;
}
