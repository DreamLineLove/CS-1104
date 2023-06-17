#include <iostream>
using namespace std;

int main() {
  string names[5] = {
      "Min Thu Kyaw Khaung", "Htike San",       "Thet Thiha",
      "Swan Htet Naing",     "Min Phone Thike",
  };
  int marks[5] = {
      80, 80, 80, 85, 80,
  };
  int total = 0;
  for (int i = 0; i < 5; i++) {
    total += marks[i];
  }
  cout << total;

  return 0;
}
