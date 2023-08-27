#include <iostream>
using namespace std;

int main() {
  int mark;
  cin >> mark;

  if (mark >= 75) {
    cout << "Distinction"
         << "\n";
  } else if (mark >= 65) {
    cout << "Credit"
         << "\n";
  } else if (mark >= 50) {
    cout << "Pass"
         << "\n";
  } else {
    cout << "Fail"
         << "\n";
  }

  return 0;
}
