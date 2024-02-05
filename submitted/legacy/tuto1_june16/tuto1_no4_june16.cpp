#include <iostream>
using namespace std;

void bubbleSort(int *marks, int length) {
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (*(marks + j) > *(marks + j + 1)) {
        int temp = *(marks + j);
        *(marks + j) = *(marks + j + 1);
        *(marks + j + 1) = temp;
      }
    }
  }
}

int main() {
  int marks[] = {
      69,
      80,
      75,
      45,
  };
  int length = sizeof(marks) / sizeof(marks[0]);
  cout << "Originals marks:\n\t";
  for (int i = 0; i < length; i++) {
    cout << marks[i] << " ";
  }

  bubbleSort(marks, length);
  cout << "\nSorted marks (USING bubble sort):\n\t";
  for (int i = 0; i < length; i++) {
    cout << marks[i] << " ";
  }
  cout << endl;
  return 0;
}
