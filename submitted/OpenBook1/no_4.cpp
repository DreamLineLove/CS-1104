#include <iostream>
using namespace std;

float dollar(float kyat);
float yuan(float kyat);
float yen(float kyat);

const float dollarRate = 3500;
const float yuanRate = 500;
const float yenRate = 20;

int main() {
  cout << "\tCURRENCY EXCHANGE" << "\n";
  cout << "\n-\tType in 0 to quit" << "\n";

  float value;
  while (value != 0) {
    cout << "\n- Value: ";
    cin >> value;
    if (value != 0) {
      cout << "= " << dollar(value) << " USD" << "\n";
      cout << "= " << yuan(value) << " Yuan" << "\n";
      cout << "= " << yen(value) << " Yen" << "\n";
    }
  }

  cout << "\n-\tProgram exited!" << "\n";

  return 0;
}

float dollar(float kyat) { return kyat / dollarRate; }
float yuan(float kyat) { return kyat / yuanRate; }
float yen(float kyat) { return kyat / yenRate; }
