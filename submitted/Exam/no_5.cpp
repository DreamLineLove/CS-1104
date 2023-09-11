#include <iostream>
using namespace std;

int main() { return 0; }

void nonstatic() {
  int value = 0;
  cout << "value: " << value << '\n';
  value++;
}
