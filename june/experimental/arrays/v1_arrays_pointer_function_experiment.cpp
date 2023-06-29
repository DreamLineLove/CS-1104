#include <iostream>
using namespace std;

void multiplyByTwo(int *a, int size);

int main() {
  cout << "hahahah";
  int base[10] = {
      1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
  };
  for (int i = 0; i < 10; i++) {
    cout << base[i] << " ";
  }
  cout << endl;

  multiplyByTwo(base, 10);
  for (int i = 0; i < 10; i++) {
    cout << base[i] << " ";
  }
  cout << endl;

  return 0;
}

void multiplyByTwo(int *a, int size) {
  for (int i = 0; i < size; i++) {
    a[i] = a[i] * 2;
  }
}
