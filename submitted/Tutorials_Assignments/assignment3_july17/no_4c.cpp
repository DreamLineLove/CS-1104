// The default version attempts to implement forward and reverse Selection Sort
// (depending on minimum or maximum value) in separate functions and returns the
// resulting value directly.

#include <iostream>
using namespace std;

int minNum(int arr[], int size) {
  int min_num;

  for (int i = 0; i < size - 1; i++) {
    int min = i;

    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
      swap(arr[min], arr[i]);
      min_num = arr[min];
    }
  }

  return min_num;
}

int maxNum(int arr[], int size) {
  int max_num;

  for (int i = 0; i < size - 1; i++) {
    int max = i;

    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[max]) {
        max = j;
      }
      swap(arr[max], arr[i]);
      max_num = arr[max];
    }
  }

  return max_num;
}

// int minNum(int arr[], int size) {
//   int min_num;
//   for (int i = 0; i < size; i++) {
//     int min = i;
//
//     for (int j = i; j < size; j++) {
//       if (arr[j] > arr[min]) {
//         swap(arr[j], arr[min]);
//       }
//     }
//     min_num = arr[min];
//   }
//
//   return min_num;
// }
//
// int maxNum(int arr[], int size) {
//   int max_num;
//   for (int i = 0; i < size; i++) {
//     int max = i;
//
//     for (int j = i; j < size; j++) {
//       if (arr[j] < arr[max]) {
//         swap(arr[j], arr[max]);
//       }
//     }
//     max_num = arr[max];
//   }
//
//   return max_num;
// }

int avgNum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

int main() {
  int arr[5] = {88, 55, 44, 356, 78};

  cout << "Array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n\nminimum number: " << minNum(arr, 5) << endl;
  cout << "average number: " << avgNum(arr, 5) << endl;
  cout << "maximum number: " << maxNum(arr, 5) << endl;

  return 0;
}
