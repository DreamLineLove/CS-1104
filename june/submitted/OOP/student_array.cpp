#include <iostream>
using namespace std;

class Student {
public:
  string subjects[6];
  float marks[6];
  string grade_specifier[6];
  float total = 0;
  string name;
  Student() { cout << "\tstudent object constructed..." << endl; }
  void gather_information() {
    for (int i = 0; i < 6; i++) {
      cout << "\n-\tSubject " << i + 1 << " name: ";
      if (i != 0)
        cin.ignore();
      getline(cin, subjects[i]);
      cout << " \t" << subjects[i] << " mark: ";
      cin >> marks[i];
      total = marks[i] + total;
    }
  }
  void print_average() {
    float average = total / 6;
    cout << "\n-\tTotal marks: " << total << endl;
    cout << "\n-\tAverage: " << average << endl;
    if (student_failed()) {
      cout << "\n \tSTUDENT FAILED" << endl;
    }
  }

private:
  bool student_failed() {
    for (int i = 0; i < 6; i++) {
      if (i < 50)
        return true;
    }
    return false;
  }
  void print_grade_specifier() {
    for (int i = 0; i < 6; i++) {
      if (marks[i] >= 75) {
        grade_specifier[i] = "**Distinction";
      } else if (marks[i] >= 65 && marks[i] < 75) {
        grade_specifier[i] = "*qualified";
      } else {
        grade_specifier[i] = "passed";
      }
    }
  }
};

int main() {
  Student znz;
  znz.gather_information();
  znz.print_average();

  return 0;
}
