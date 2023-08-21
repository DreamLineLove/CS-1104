#include <iostream>
using namespace std;

enum InterpretedLanguage { Python, Javascript, Ruby };

int main() {
  InterpretedLanguage lang = Javascript;

  switch (lang) {
  case Python:
    cout << "You work with the python interpreter." << endl;
    break;
  case Javascript:
    cout << "You work with browsers." << endl;
    break;
  case Ruby:
    cout << "You work with Ruby on Rails" << endl;
    break;
  }

  return 0;
}
