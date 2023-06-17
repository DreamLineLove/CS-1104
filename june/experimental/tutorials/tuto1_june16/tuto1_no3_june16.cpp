#include <iostream>
using namespace std;

void decideStudentStatus(int index, int mark, int pass, int credit,
                         int distinction) {
  if (mark >= distinction) {
    cout << "- Student " << index + 1
         << " passed the CS1104 exam! \tw/ distinction" << endl;
  } else if (mark >= credit) {
    cout << "- Student " << index + 1 << " passed the CS1104 exam! \tw/ credit"
         << endl;
  } else if (mark >= pass) {
    cout << "- Student " << index + 1 << " passed the CS1104 exam!" << endl;
  } else if (mark < pass) {
    cout << "- Student " << index + 1 << " failed the CS1104 exam!" << endl;
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

  for (int i = 0; i < 4; i++) {
    decideStudentStatus(i, marks[i], pass, credit, distinction);
  }

  return 0;
}
