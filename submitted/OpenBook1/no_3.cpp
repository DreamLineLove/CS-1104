#include <iostream>
using namespace std;

void printStatus(int mark) {
  if (mark >= 75) {
    cout << "- Student passed with distinction." << endl;
    return;
  }
  if (mark >= 65 && mark < 75) {
    cout << "- Student passed with credit." << endl;
    return;
  }
  if (mark >= 50 && mark < 65) {
    cout << "- Student passed the exam." << endl;
    return;
  }
  if (mark < 50) {
    cout << "- Student did NOT pass the exam :(" << endl;
    return;
  }
}

int main() {
  cout << "\tCHECK A STUDENT'S EXAM STATUS" << endl;
  cout << "\n-\tType in 0 to quit" << endl;

  int value;
  while (value != 0) {
    cout << "\nenter mark... ";
    cin >> value;
    if (value != 0) {
      printStatus(value);
    }
  }
  return 0;
}
