#include <iostream>
using namespace std;

int main() {
  int x = 19;

  if (x == 19) {
    int y = 20;

    cout << "x + y is " << x + y << "\n";
  }

  // Error! y not known here (out of its scope)
  // y = 100;

  return 0;
}
