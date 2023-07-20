#include <iostream>
using namespace std;

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

  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}
