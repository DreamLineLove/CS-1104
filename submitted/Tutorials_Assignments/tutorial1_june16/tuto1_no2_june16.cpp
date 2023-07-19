#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int nums[4] = {2, 3, 4, 5};
  int arr[4][4];
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      arr[i][j] = nums[i] * pow(nums[i], j);
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
