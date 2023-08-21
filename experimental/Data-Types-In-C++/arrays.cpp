#include <iostream>
using namespace std;

int main() {
  int arr[] = {0, 2, 3, 4, 5};

  arr[0] = 1;
  for (int i = 0; i < 5; i++) {
    arr[i] = i * 2;
    cout << arr[i] << ' ';
  }
  cout << endl;

  return 0;
}
