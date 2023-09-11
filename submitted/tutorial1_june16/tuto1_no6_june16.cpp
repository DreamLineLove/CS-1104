#include <iostream>
using namespace std;

int main() {
  string names[] = {"Min Thu", "Cherry", "Thura", "Thar Htoo", ""};
  int len = sizeof(names) / sizeof(names[0]);

  cout << "Original array..." << "\n";
  for (int i = 0; i < len; i++) {
    cout << "\t\"" << names[i] << "\"" << "\n";
  }

  for (int i = 3; i > 1; i--) {
    names[i + 1] = names[i];
  }
  names[2] = "Thiha";
  cout << "\nAfter inserting \"Thiha\"..." << "\n";
  for (int i = 0; i < len; i++) {
    cout << "\t\"" << names[i] << "\"" << "\n";
  }

  names[3] = names[4];
  names[4] = "";
  cout << "\nAfter deleting \"Thura\"..." << "\n";
  for (int i = 0; i < len; i++) {
    cout << "\t\"" << names[i] << "\"" << "\n";
  }

  return 0;
}
