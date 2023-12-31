#include <fstream>
#include <iostream>
using namespace std;

void selection_sort(int arr[], int n);
int minimum(int arr[], int n);
int maximum(int arr[], int n);

int main() {
  int arr[] = {520, 491, 503, 476, 454, 439};

  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array" << '\n';
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << "\n\n";

  cout << "Minimum number is " << minimum(arr, n) << '\n';
  cout << "Maximum number is " << maximum(arr, n) << '\n';
  cout << "\n";

  selection_sort(arr, n);

  cout << "Sorted array" << '\n';
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';

  return 0;
}

void selection_sort(int arr[], int n) {
  int i, j;

  for (i = 0; i < n - 1; i++) {
    int minIndex = i;

    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }

    if (minIndex != i) {
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

int minimum(int arr[], int n) {
  int min = arr[0];

  for (int i = 0; i < n; i++) {
    min = (arr[i] < min) ? arr[i] : min;
  }
  return min;
}

int maximum(int arr[], int n) {
  int max = arr[0];

  for (int i = 0; i < n; i++) {
    max = (arr[i] > max) ? arr[i] : max;
  }
  return max;
}
