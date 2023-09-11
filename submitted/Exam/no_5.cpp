#include <iostream>
using namespace std;

float running_avg(const float input);

int main() {
  float v;

  do {
    cout << "\nEnter number: ";
    cin >> v;
    cout << "Running average is: " << running_avg(v) << '\n';
  } while (v > 0);

  return 0;
}

float running_avg(const float input) {
  static float sum = 0, count = 0;
  count++;

  sum = sum + input;
  cout << "Current" << sum << '\n';
  return sum / count;
}
