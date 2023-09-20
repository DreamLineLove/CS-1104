#include <iostream>
using namespace std;

void selection_sort_marks(int marks[], int n);

int main() {
  int marks[6] = {520, 491, 503, 476, 454, 439};

  cout << "Original marks: ";
  for (int i = 0; i < 6; i++) {
    cout << marks[i] << ' ';
  }
  cout << '\n';

  selection_sort_marks(marks, 6);

  cout << "Sorted marks: ";
  for (int i = 0; i < 6; i++) {
    cout << marks[i] << ' ';
  }
  cout << '\n';

  return 0;
}

void selection_sort_marks(int marks[], int n) {
  int i, j;

  for (int i = 0; i < n - 1; i++) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
      if (marks[j] < marks[min])
        min = j;
    }

    if (min != i) {
      int temp = marks[min];
      marks[min] = marks[i];
      marks[i] = temp;
    }
  }
}
