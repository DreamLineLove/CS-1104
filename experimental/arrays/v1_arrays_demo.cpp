#include <iostream>
using namespace std;

// int main() {
//   int numbers[] = {2, 3, 4, 5};
//   int size[10];
//   int multi[4][10];
//
//   for (int i = 0; i < 4; i++) {
//
//     for (int j = 0; j < 10; j++) {
//       multi[i][j] = numbers[i] * (j + 1);
//       cout << numbers[i] << " x " << (j + 1) << " = " << multi[i][j] << endl;
//     }
//     cout << endl;
//   }
//
//   return 0;
// }

int main() {
  int base[3] = {2, 12, 22};
  int loop[3][5];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      loop[i][j] = base[i] + (2 * j);
      cout << loop[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}
