#include <iostream>
#include <regex>
using namespace std;

bool isCorrectFormat(string date);

int main() {
  string date;
  bool isFirstTime = true;

  while (isCorrectFormat(date) != true) {
    if (isFirstTime == false) {
      cout << "\tValidation failed!\n\t(the correct format is DD/MM/YYYY)"
           << endl;
    }
    cout << "Enter a date: ";
    cin >> date;
    cout << endl;
    isFirstTime = false;
  }

  cout << "\tValidation passed!" << endl;

  return 0;
}

bool isCorrectFormat(string date) {
  regex pattern("(0[1-9]|1[0-9]|2[0-9]|3[0-1])-(0[1-9]|1[0-2])-(\\d{4})");

  return regex_match(date, pattern);
}
