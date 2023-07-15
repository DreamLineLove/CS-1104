#include <iostream>
using namespace std;

class Student {
public:
  string subjects[6];
  float marks[6];
  string name;
  Student() { cout << "\tstudent object constructed..."; }
  void gather_information() {
    for (int i = 0; i < 6; i++) {
      cout << "\n-\tEnter subject " << i << ":";
      cin >> subjects[i];
      cout << "-\tEnter mark for " << subjects[i];
    }
  }
};

int main() { return 0; }
