#include <iostream>
using namespace std;

int main() {
  float sum, n;
  int i = 1;

  cout << "Input value n ";
  cin >> n;

  while (i <= n) {
    float value;
    cout << "Input a value ";
    cin >> value;
    sum = sum + value;
    i += 1;
  }

  float average = sum / n;

  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return 0;
}
