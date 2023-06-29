#include <iostream>
using namespace std;

void f(int *num);

int main() {
  int num = 99;
  for (int i = 0; i < 3; i++)
    f(&num);

  return 0;
}

void f(int *num) {
  cout << *num << endl;

  *num = *num + 1;
}
