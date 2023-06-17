#include <iostream>
using namespace std;

void insertPerson(string array[], int length, string name, int index) {
  string temp;
  for (int i = index; i < length; i++) {
    temp = array[i + 1];
    if (i == index) {
      array[i + 1] = array[i];
    } else {
      array[i + 1] = temp;
    }
  }
}

int main() {
  string people[5] = {
      "Min Thu", "Cherry", "Thura", "Thar Htoo", "",
  };
  cout << "Original array:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "\t" << people[i] << endl;
  }

  for (int i = 3; i >= 2; i--) {
    people[i + 1] = people[i];
  }

  people[2] = "Thiha";
  cout << "Thiha is added and elements shifted right:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "\t" << people[i] << endl;
  }

  for (int i = 3; i < 4; i++) {
    people[i] = people[i + 1];
  }

  people[4] = "";
  cout << "\nThura is deleted and elements shifted left:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "\t" << people[i] << endl;
  }

  return 0;
}
