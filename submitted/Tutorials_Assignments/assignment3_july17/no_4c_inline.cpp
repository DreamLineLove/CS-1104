// This alt version of no_4c uses Selection Sort to sort the given array first.
// Then, it simply references the first and last values from this sorted array.
// The default version instead attempts to return the values from functions
// (using Selection Sort instead).
// The default version attempts to implement forward and reverse Selection Sort
// (depending on minimum or maximum value) in separate functions and returns the
// resulting value directly.
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

  for (i = 0; i < 5; i++) {
    int min = i;

    for (j = i; j < 5; j++) {
      if (arr[j] < arr[min]) {
        int temp = arr[j];
        arr[j] = arr[min];
        arr[min] = temp;
      }
    }
  }

  cout << "\n\nminimum number: " << arr[0] << endl;
  cout << "average number: " << avg << endl;
  cout << "maximum number: " << arr[4] << endl;

  return 0;
}
