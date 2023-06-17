#include <fstream>
#include <iomanip>
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
  studentsFile << "No." << setw(22) << "Names" << setw(8) << "Marks" << endl;
  studentsFile << "---" << setw(22) << "--------------------" << setw(8)
               << "-----" << endl;
  int i;
  for (i = 0; i < 5; i++) {
    studentsFile << i + 1 << ". " << setw(22) << names[i] << setw(5) << marks[i]
                 << endl;
  }
  if (i == 5) {
    studentsFile << "\n" << setw(25) << "Total:" << setw(6) << total << endl;
  }
  studentsFile.close();

  ifstream readFile;
  readFile.open("studentsData.txt");
  string line;
  while (getline(readFile, line)) {
    cout << line << endl;
  }
  readFile.close();

  return 0;
}
