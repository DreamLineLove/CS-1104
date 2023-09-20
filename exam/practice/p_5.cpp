#include <iostream>
using namespace std;

float running_avg(float num);

int main() {
  float num = 0;

  do {
    cout << "Enter a number greater than -1: ";
    cin >> num;

    if (num > -1) {
      cout << "Running average is " << running_avg(num) << '\n';
      cout << '\n';
    }
  } while (num > -1);

  return 0;
}

float running_avg(float num) {
  static float sum = 0;
  static float count = 0;

  sum += num;

  count++;

  return sum / count;
}
