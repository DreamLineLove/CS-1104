#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
  string people[] = {"Min Thu", "Cherry", "Thura", "Thar Htoo", ""};
  int length = sizeof(people) / sizeof(people[0]);

  cout << "Original array..." << endl;
  for (int i = 0; i < length; i++) {
    cout << "\t\"" << people[i] << "\"" << endl;
  }

  for (int i = 3; i > 1; i--) {
    people[i + 1] = people[i];
  }
  people[2] = "Thiha";
  cout << "\nAfter inserting \"Thiha\"..." << endl;
  for (int i = 0; i < length; i++) {
    cout << "\t\"" << people[i] << "\"" << endl;
  }

  people[3] = people[4];
  people[4] = "";
  cout << "\nAfter deleting \"Thura\"..." << endl;
  for (int i = 0; i < length; i++) {
    cout << "\t\"" << people[i] << "\"" << endl;
  }

  return 0;
}
