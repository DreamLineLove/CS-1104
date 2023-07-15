#include <iostream>
using namespace std;

class Student {
public:
  string subjects[6];
  float marks[6];
  float total = 0;
  string name;
  Student() { cout << "\tstudent object constructed..." << endl; }
  void gather_information() {
    for (int i = 0; i < 6; i++) {
      cout << "\n-\tSubject " << i + 1 << " name: ";
      getline(cin, subjects[i]);
      cout << " \t" << subjects[i] << " mark: ";
      cin >> marks[i];
      total = marks[i] + total;
    }
  }
  void print_average() {
    float average = total / 6;
    cout << "\tAverage mark: " << average;
  }
};

int main() {
  Student znz;
  znz.gather_information();
  znz.print_average();

  return 0;
}
