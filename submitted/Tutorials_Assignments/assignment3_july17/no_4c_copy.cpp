#include <iostream>
using namespace std;

int minNum(int arr[], int size) {
  int newArr[size], min_num;
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  for (int j = 0; j < size; j++) {
    int min = j;

    for (int z = j; z < size; z++) {
      if (newArr[z] > newArr[min]) {
        int temp = newArr[z];
        newArr[z] = newArr[min];
        newArr[min] = temp;
      }
    }
    min_num = newArr[min];
  }

  return min_num;
}

int maxNum(int arr[], int size) {
  int newArr[size], max_num;
  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  for (int j = 0; j < size; j++) {
    int max = j;

    for (int z = j; z < size; z++) {
      if (newArr[z] < newArr[max]) {
        int temp = newArr[z];
        newArr[z] = newArr[max];
        newArr[max] = temp;
      }
    }
    max_num = newArr[max];
  }

  return max_num;
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

  cout << "\n\nminimum number: " << minNum(arr, 5) << endl;
  cout << "average number: " << avgNum(arr, 5) << endl;
  cout << "maximum number: " << maxNum(arr, 5) << endl;

  return 0;
}
