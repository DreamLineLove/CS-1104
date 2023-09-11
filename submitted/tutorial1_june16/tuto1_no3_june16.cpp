#include <iostream>
using namespace std;

void printStatus(int index, int mark, int pass, int credit, int distinction) {
  if (mark >= distinction) {
    cout << "- Student " << index + 1
         << " passed the CS1104 exam! \tw/ distinction" << "\n";
  } else if (mark >= credit) {
    cout << "- Student " << index + 1 << " passed the CS1104 exam! \tw/ credit"
         << "\n";
  } else if (mark >= pass) {
    cout << "- Student " << index + 1 << " passed the CS1104 exam!" << "\n";
  } else if (mark < pass) {
    cout << "- Student " << index + 1 << " failed the CS1104 exam!" << "\n";
  }
}

int main() {
  int marks[4] = {
      69,
      80,
      75,
      45,
  };
  int pass = 50;
  int credit = 65;
  int distinction = 75;

  cout << "\tCS 1104 EXAM RESULTS" << "\n" << "\n";
  cout << "\tStudent(s)\tMark" << "\n";
  cout << "\t----------\t----" << "\n";
  for (int i = 0; i < 4; i++) {
    cout << "\tStudent " << i + 1 << "\t" << marks[i] << "\n";
  }
  cout << "\n";

  for (int i = 0; i < 4; i++) {
    printStatus(i, marks[i], pass, credit, distinction);
  }

  return 0;
}
