#include <iostream>
using namespace std;

void bubbleSort(int *array, int array_size) {
  for (int i = 0; i < array_size; i++) {
    for (int j = 0; j < array_size; j++) {
      if (*(array + j) > *(array + j + 1)) {
        int temp = *(array + j);
        *(array + j) = *(array + j + 1);
        *(array + j + 1) = temp;
      }
    }
  }
}

int main() {
  int array[9] = {
      9, 8, 7, 6, 5, 4, 3, 2, 1,
  };

  int array_size = sizeof(array) / sizeof(array[0]);
  bubbleSort(array, array_size);

  for (int i = 0; i < array_size; i++) {
    cout << array[i] << endl;
  }

  return 0;
}
