// #include <iostream>
// using namespace std;
//
// int main() {
//   int i, j, arr[6][11];
//
//   for (i = 2; i < 6; i++) {
//     for (j = 1; j < 11; j++) {
//       arr[i][j] = i * j;
//       cout << i << " * " << j << " = " << arr[i][j] << "\n";
//     }
//     cout << "\n";
//   }
//
//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int numbers[] = {2, 3, 4, 5};
  int size[10];
  int multi[4][10];

  for (int i = 0; i < 4; i++) {

    for (int j = 0; j < 10; j++) {
      multi[i][j] = numbers[i] * (j + 1);
      cout << numbers[i] << " x " << (j + 1) << " = " << multi[i][j] << "\n";
    }
    cout << "\n";
  }

  return 0;
}
