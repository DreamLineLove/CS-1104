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

  ofstream writeFile;
  writeFile.open("studentsData.txt");
  writeFile << "No." << setw(23) << "Names" << setw(8) << "Marks" << endl;
  writeFile << "---" << setw(23) << "--------------------" << setw(8) << "-----"
            << endl;
  int i;
  for (i = 0; i < 5; i++) {
    writeFile << i + 1 << ". " << setw(23) << names[i] << setw(5) << marks[i]
              << endl;
  }
  if (i == 5) {
    writeFile << "\n" << setw(26) << "Total:" << setw(6) << total << endl;
  }
  writeFile.close();

  ifstream readFile;
  readFile.open("studentsData.txt");
  string line;
  while (getline(readFile, line)) {
    cout << line << endl;
  }
  readFile.close();

  string filePath = "/studentsData.txt";
  cout << "\n\n- filepath: \"" << filePath << "\"" << endl;

  return 0;
}
