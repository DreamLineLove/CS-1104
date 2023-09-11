#include <iostream>
using namespace std;

void bubbleSort(int *arrPtr, int len) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      if (*(arrPtr + j) > *(arrPtr + j + 1)) {
        int temp = *(arrPtr + j);
        *(arrPtr + j) = *(arrPtr + j + 1);
        *(arrPtr + j + 1) = temp;
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
  int len = sizeof(marks) / sizeof(marks[0]);
  cout << "Originals marks:\n\t";
  for (int i = 0; i < len; i++) {
    cout << marks[i] << " ";
  }

  bubbleSort(marks, len);
  cout << "\nSorted marks (USING bubble sort):\n\t";
  for (int i = 0; i < len; i++) {
    cout << marks[i] << " ";
  }
  cout << "\n";
  return 0;
}
