#include <iostream>
using namespace std;

void display(int i) { cout << "\t" << i; }

int main() {
  int nums[4][4] = {
      {2, 3, 4, 5},
      {4, 9, 16, 25},
      {8, 27, 64, 125},
      {16, 81, 144, 625},
  };
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      display(nums[i][j]);
    }
    cout << endl;
  }
  return 0;
}
