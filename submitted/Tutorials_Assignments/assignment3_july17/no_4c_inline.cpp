#include <iostream>
using namespace std;

int main() {
  int arr[5] = {88, 55, 44, 356, 78};
  int i, j, z, sum, avg;

  cout << "Array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  sum = 0;
  for (z = 0; z < 5; z++) {
    sum += arr[z];
  }
  avg = sum / 5;

  for (i = 0; i < 5 - 1; i++) {
    int min = i;

    for (j = i + 1; j < 5; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
      if (min != i) {
        swap(arr[min], arr[i]);
      }
    }
  }

  cout << "\n\nminimum number: " << arr[0] << endl;
  cout << "average number: " << avg << endl;
  cout << "maximum number: " << arr[4] << endl;

  return 0;
}
