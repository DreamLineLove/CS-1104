#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
  int i, j;

  for (i = 0; i < n - 1; i++) {
    int minIndex = i;

    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }

    if (minIndex != i)
      swap(arr[minIndex], arr[i]);
  }
}

int main() {
  int arr[] = {520, 491, 503, 476, 454, 439};

  for (int i = 0; i < 6; i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';

  selection_sort(arr, 6);

  for (int i = 0; i < 6; i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';

  return 0;
}
