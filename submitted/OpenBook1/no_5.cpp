#include <iostream>
using namespace std;

void selection_sort(int n, int arr[], int order[]) {
  for (int i = 0; i < n; i++) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
      if (min != 1) {
        swap(arr[min], arr[i]);
        swap(order[min], order[i]);
      }
    }
  }
}

int main() {
  int n;
  cout << "- Number of students: ";
  cin >> n;

  int arr[n];
  int order[] = {0, 1, 2, 3, 4};
  for (int i = 0; i < n; i++) {
    cout << "\n- Student " << i << " mark: ";
    cin >> arr[i];
  }

  selection_sort(n, arr, order);
  cout << "\n\tStudent " << order[n - 1]
       << " got the highest mark: " << arr[n - 1] << endl;

  return 0;
}
