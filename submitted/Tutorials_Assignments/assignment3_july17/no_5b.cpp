#include <iostream>
using namespace std;

int main() {
  int size, i = 0;
  cout << "How many elements do you want in the array? ";
  cin >> size;

  int arr[size];

  while (i < size) {
    cout << "\nEnter element value: ";
    cin >> arr[i];
    i++;
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}
