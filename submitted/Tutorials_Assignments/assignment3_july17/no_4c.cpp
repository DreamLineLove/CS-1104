#include <iostream>
using namespace std;

void getMinMax(int *min, int *max, int arr[], int size) {
  int newArr[size];
  for (int z = 0; z < size; z++) {
    newArr[z] = arr[z];
  }

  for (int i = 0; i < size - 1; i++) {
    int min = i;

    for (int j = i; j < size; j++) {
      if (newArr[j] < newArr[min]) {
        min = j;
      }
      if (min != i) {
        swap(newArr[min], newArr[i]);
      }
    }
  }

  *min = newArr[0];
  *max = newArr[size - 1];
}

int avgNum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

int main() {
  int arr[5] = {88, 55, 44, 356, 78};
  int i, min, max, avg;

  cout << "Array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  getMinMax(&min, &max, arr, 5);
  avg = avgNum(arr, 5);

  cout << "\n\nminimum number: " << min << endl;
  cout << "average number: " << avg << endl;
  cout << "maximum number: " << max << endl;

  return 0;
}
