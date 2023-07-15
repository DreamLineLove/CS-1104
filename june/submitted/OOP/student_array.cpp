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
    cout << "\nWhat is the name of the student? ";
    cin >> name;
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
    cout << "\n\tTotal marks: " << total;
    cout << "\n\tAverage: " << average;
    if (student_failed()) {
      cout << "\n\tSTUDENT FAILED";
    } else {
      cout << "\n\nGRADE SPECIFIERS" << endl;
      for (int i = 0; i < 6; i++) {
        cout << "\t- " << subjects[i] << "\t" << grade_specifier[i] << endl;
      }
    }
  }
  void calculate_grade_specifier() {
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

private:
  bool student_failed() {
    for (int i = 0; i < 6; i++) {
      if (marks[i] < 50)
        return true;
    }
    return false;
  }
};

int main() {
  Student znz;
  znz.gather_information();
  znz.calculate_grade_specifier();
  znz.print_average();

  return 0;
}
