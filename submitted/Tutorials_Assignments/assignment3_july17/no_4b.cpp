#include <iostream>
using namespace std;

int main() {
  int i, j, arr[6][11];

  for (i = 2; i < 6; i++) {
    for (j = 1; j < 11; j++) {
      arr[i][j] = i * j;
      cout << i << " * " << j << " = " << arr[i][j] << endl;
    }
    cout << endl;
  }

  return 0;
}
