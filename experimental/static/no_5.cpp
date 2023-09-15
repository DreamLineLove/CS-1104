#include <iostream>
using namespace std;

float running_avg(float num) {
  static float sum = 0;
  static float count = 0;

  sum += num;
  count++;

  return sum / count;
}

int main() {
  float num;

  do {
    cout << "pick a number: ";
    cin >> num;

    if (num > -1)
      cout << "running average is " << running_avg(num) << '\n';

  } while (num > -1);

  return 0;
}
