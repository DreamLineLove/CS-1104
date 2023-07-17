#include <iostream>
using namespace std;

// int main() {
//   int base[2] = {2, 3};
//   int multi[2][2] = {
//       {1, 2},
//       {10, 10},
//   };
//   // int multiplier[3] = {1, 2, 10};
//
//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 2; j++) {
//       cout << base[i] << " * " << multi[0][j] << " = " << base[i] *
//       multi[0][j]
//            << endl;
//     }
//     if (i == 1) {
//       cout << base[1] << " * " << multi[1][j] << " = " << base[1] *
//       multi[1][0]
//     }
//   }
//
//   return 0;
// }

int main() {
  int base[2][2] = {
      {2, 3},
      {3, 5},
  };
  int multiplier[2][2] = {
      {1, 2},
      {0, 10},
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << base[0][i] << " * " << multiplier[0][j] << " = "
           << base[0][i] * multiplier[0][j] << endl;
    }
    cout << "\t....";
    if (i == 1) {
      for (int z = 0; z < 2; z++) {
        cout << base[1][z] << " * " << multiplier[1][1] << " = "
             << base[1][z] * multiplier[1][1] << endl;
      }
    }
  }
}
