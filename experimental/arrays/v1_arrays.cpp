#include <iostream>
using namespace std;

int main() {
  int numbers[] = {2, 3, 4, 5};
  int size[10];
  int multi[4][10];

  for (int i = 0; i < 4; i++) {

    for (int j = 0; j < 10; j++) {
      multi[i][j] = numbers[i] * (j + 1);
      cout << numbers[i] << " x " << (j + 1) << " = " << multi[i][j] << endl;
    }
    cout << endl;
  }

  return 0;
}
