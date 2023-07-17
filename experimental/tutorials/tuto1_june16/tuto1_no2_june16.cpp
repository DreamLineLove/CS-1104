#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int numbers[4] = {2, 3, 4, 5};
  int array[4][4];
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      array[i][j] = numbers[i] * pow(numbers[i], j);
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
