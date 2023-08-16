#include <iostream>
using namespace std;

int main() {
  int arr[3] = {5, 15, 6};

  int min = arr[0];

  for (int i = 0; i < 3; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  cout << "The minimum number is: " << min << endl;

  return 0;
}
