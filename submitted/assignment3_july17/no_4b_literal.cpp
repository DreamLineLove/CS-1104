#include <iostream>
using namespace std;

int main() {
  int base_numbers[2][2] = {
      {2, 3},
      {3, 5},
  };
  int multipliers[2][2] = {
      {1, 2},
      {0, 10},
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "\t";
      cout << base_numbers[0][i] << " * " << multipliers[0][j] << " = "
           << base_numbers[0][i] * multipliers[0][j] << "\n";
    }
    cout << "\t  ...." << "\n";
    if (i == 1) {
      for (int z = 0; z < 2; z++) {
        cout << "\t";
        cout << base_numbers[1][z] << " * " << multipliers[1][1] << " = "
             << base_numbers[1][z] * multipliers[1][1] << "\n";
        cout << "\t  ......" << "\n";
      }
    }
  }
}
