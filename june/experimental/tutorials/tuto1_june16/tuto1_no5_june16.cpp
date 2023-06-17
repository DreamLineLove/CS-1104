#include <fstream>
#include <iostream>
using namespace std;

int main() {
  string names[5] = {
      "Min Thu Kyaw Khaung", "Htike San",       "Thet Thiha",
      "Swan Htet Naing",     "Min Phone Thike",
  };
  int marks[5] = {
      80, 80, 80, 85, 80,
  };
  int total = 0;
  for (int i = 0; i < 5; i++) {
    total += marks[i];
  }

  ofstream studentsFile;
  studentsFile.open("studentsData.txt");
  int i;
  for (i = 0; i < 5; i++) {
    studentsFile << " " << names[i] << "\t" << marks[i] << endl;
  }
  if (i == 5)
    studentsFile << "\tTotal:\t" << total << endl;

  return 0;
}
