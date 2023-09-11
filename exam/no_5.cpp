#include <iostream>
using namespace std;

float running_avg(float i);

int main() {
  float num = 0;

  do {
    cout << "Enter number (-1 to quit): ";
    cin >> num;
    if (num != -1)
      cout << "Running average is: " << running_avg(num) << '\n';
    cout << '\n';
  } while (num > -1);

  return 0;
}

float running_avg(float i) {
  static float sum = 0;
  static int count = 0;

  sum = sum + i;

  count++;

  return sum / count;
}
