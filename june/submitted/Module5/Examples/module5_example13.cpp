#include <iostream>
using namespace std;

// These are called function prototypes.
void func1();
void func2();

// This is a global variable.
int count;

int main() {
  int i;

  for (i = 0; i < 10; i++) {
    count = i * 2;
    func1();
  }

  return 0;
}

void func1() {
  cout << "count: " << count;
  cout << endl;
  func2();
}

void func2() {
  int count;

  for (count = 0; count < 3; count++)
    cout << '.';
}
