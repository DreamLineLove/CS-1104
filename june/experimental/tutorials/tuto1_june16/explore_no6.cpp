#include <iostream>
using namespace std;

int main() {
  string array[] = {"one", "two", "three", "four", "five", "six", "seven"};
  int length = sizeof(array) / sizeof(array[0]);

  cout << "Original array:\n";
  for (int i = 0; i < length; i++) {
    cout << array[i] << endl;
  }

  for (int i = length - 2; i >= 1; i--) {
    array[i + 1] = array[i];
  }

  cout << endl;
  for (int i = 0; i < length; i++) {
    cout << array[i] << endl;
  }

  return 0;
}
