#include <iostream>
using namespace std;

void selection_sort(int arr[], int size) {
  int i, j;

  for (i = 0; i < size - 1; i++) {
    int min = i;

    for (j = i + 1; j < size; j++) {
      if (arr[j] < arr[min])
        min = j;
    }

    if (min != i)
      swap(arr[min], arr[i]);
  }
}

int main() {
  int arr[] = {520, 491, 503, 476, 454, 439};

  selection_sort(arr, 6);

  for (int i = 0; i < 6; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}
