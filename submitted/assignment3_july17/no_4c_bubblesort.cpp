#include <iostream>
using namespace std;

int maxNum(int arr[], int size) {
  int newArr[size];
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  for (int j = 0; j < size; j++) {
    for (int z = 0; z < size; z++) {
      if (newArr[z] > newArr[z + 1]) {
        int temp = newArr[z];
        newArr[z] = newArr[z + 1];
        newArr[z + 1] = temp;
      }
    }
  }

  return newArr[size - 1];
}

int minNum(int arr[], int size) {
  int newArr[size];
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  for (int j = 0; j < size; j++) {
    for (int z = 0; z < size; z++) {
      if (newArr[z] > newArr[z + 1]) {
        int temp = newArr[z];
        newArr[z] = newArr[z + 1];
        newArr[z + 1] = temp;
      }
    }
  }

  return newArr[0];
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

  cout << "Array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n\nminimum number: " << minNum(arr, 5) << "\n";
  cout << "average number: " << avgNum(arr, 5) << "\n";
  cout << "maximum number: " << maxNum(arr, 5) << "\n";

  return 0;
}
