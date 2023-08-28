#include <iostream>
using namespace std;

void printStatus(int mark) {
  if (mark >= 75) {
    cout << "- Student passed with distinction." << "\n";
    return;
  }
  if (mark >= 65 && mark < 75) {
    cout << "- Student passed with credit." << "\n";
    return;
  }
  if (mark >= 50 && mark < 65) {
    cout << "- Student passed the exam." << "\n";
    return;
  }
  if (mark < 50) {
    cout << "- Student did NOT pass the exam :(" << "\n";
    return;
  }
}

int main() {
  cout << "\tCHECK A STUDENT'S EXAM STATUS" << "\n";
  cout << "\n-\tType in 0 to quit" << "\n";

  int mark;
  while (mark != 0) {
    cout << "\nenter mark... ";
    cin >> mark;
    if (mark != 0) {
      printStatus(mark);
    }
  }
  return 0;
}
