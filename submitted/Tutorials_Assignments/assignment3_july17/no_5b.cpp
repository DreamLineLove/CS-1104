#include <fstream>
#include <iostream>
using namespace std;

void selection_sort(int arr[], int size);

int main() {
  int size, i = 0;
  cout << "- How many elements do you want in the array? ";
  cin >> size;

  int arr[size];
  cout << endl;

  while (i < size) {
    cout << "\t- Enter value for index " << i << ": ";
    cin >> arr[i];
    i++;
  }

  selection_sort(arr, size);

  cout << "\n\t- Sorted array: ";
  for (int j = 0; j < size; j++) {
    cout << " " << arr[j];
  }
  cout << endl;

  return 0;
}

void selection_sort(int arr[], int size) {
  // for (int i = 0; i < size; i++) {
  //   int min = i;
  //
  //   for (int j = i; j < size; j++) {
  //     if (arr[j] < arr[min]) {
  //       swap(arr[j], arr[min]);
  //     }
  //   }
  // }
  for (int i = 0; i < size - 1; i++) {
    int min = i;

    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
      if (min != i) {
        swap(arr[min], arr[i]);
      }
    }
  }
}
