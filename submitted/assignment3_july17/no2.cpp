#include <iostream>
using namespace std;

int main() {
  float sum, n;
  int i = 1;

  cout << "Input value n ";
  cin >> n;

  while (i <= n) {
    float val;
    cout << "Input a value ";
    cin >> val;
    sum = sum + val;
    i += 1;
  }

  float avg = sum / n;

  cout << "Sum = " << sum << "\n";
  cout << "Average = " << avg << "\n";

  return 0;
}
