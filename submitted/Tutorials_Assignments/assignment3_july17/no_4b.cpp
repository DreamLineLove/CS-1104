#include <iostream>
using namespace std;

int main() {
  int arr[4][10];

  for (int i = 2; i < 5; i++) {
    for (int j = 1; j < 11; j++) {
      arr[i][j] = i * j;
      cout << "\t" << i << " * " << j << " = " << arr[i][j] << endl;
    }
    cout << endl;
  }

  return 0;
}
