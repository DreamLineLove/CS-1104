#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int arr[4][10];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 10; j++) {
      arr[i][j] = (i + 3) * (j + 1);
      cout << i + 3 << " * " << j + 1 << " = " << arr[i][j] << '\n';
    }
    cout << '\n';
  }

  return 0;
}
