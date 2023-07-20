#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int i, j, arr[5][4];

  for (i = 1; i < 5; i++) {
    for (j = 2; j <= 5; j++) {
      arr[i][j] = pow(j, i);
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
