#include <iostream>
using namespace std;

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
      cout << "\t";
      cout << base[0][i] << " * " << multiplier[0][j] << " = "
           << base[0][i] * multiplier[0][j] << endl;
    }
    cout << "\t  ...." << endl;
    if (i == 1) {
      for (int z = 0; z < 2; z++) {
        cout << "\t";
        cout << base[1][z] << " * " << multiplier[1][1] << " = "
             << base[1][z] * multiplier[1][1] << endl;
        cout << "\t  ......" << endl;
      }
    }
  }
}
