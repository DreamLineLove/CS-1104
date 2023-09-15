#include <iostream>
using namespace std;

void selection_sort(int arr[], int n);

int main() {
  int marks[6] = {520, 491, 503, 476, 454, 439};

  cout << "unsorted marks: ";
  for (int i = 0; i < 6; i++) {
    cout << marks[i] << ' ';
  }
  cout << '\n';

  cout << "sorted marks: ";
  selection_sort(marks, 6);
  for (int i = 0; i < 6; i++) {
    cout << marks[i] << ' ';
  }
  cout << '\n';

  cout << '\n';
  cout << "maximum mark: " << marks[5] << '\n';
  cout << "minimum mark: " << marks[0] << '\n';

  return 0;
}

void selection_sort(int arr[], int n) {
  int i, j;

  for (i = 0; i < n - 1; i++) {
    int min = i;

    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min])
        min = j;
    }

    if (min != i)
      swap(arr[min], arr[i]);
  }
}
