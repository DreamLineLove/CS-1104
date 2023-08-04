#include <iostream>
using namespace std;

void selection_sort(int n, int arr[n]) {
  for (int i = 0; i < n; i++) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
      if (min != 1) {
        swap(arr[min], arr[i]);
      }
    }
  }
}

int main() {
  int n;
  cout << "- Enter number of students: ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cout << "\n- Enter student " << i << " mark: ";
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
  selection_sort(n, arr);

  return 0;
}
