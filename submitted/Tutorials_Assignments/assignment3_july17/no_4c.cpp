// The default version attempts to implement forward and reverse Selection Sort
// (depending on minimum or maximum value) in separate functions and returns the
// resulting value directly.

#include <iostream>
using namespace std;

int maxNum(int arr[], int size) {
  int newArr[size], max_num;
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  for (int j = 0; j < size; j++) {
    int max;
    for (int z = j; z < size; z++) {
      if (newArr[z] > newArr[max]) {
        int temp = newArr[z];
        newArr[z] = newArr[max];
        newArr[max] = temp;
      }
    }
    max_num = newArr[max];
  }

  return max_num;
}

int main() {
  int arr[5] = {88, 55, 44, 356, 78};

  cout << "Array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n\nmaximum number: " << maxNum(arr, 5) << endl;

  return 0;
}
