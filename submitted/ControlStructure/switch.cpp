#include <iostream>
using namespace std;

enum ProgrammingLanguage { Python, Cpp, Haskell, Prolog };

int main() {
  ProgrammingLanguage lang = Haskell;

  switch (lang) {
  case Python:
    cout << "Python is an interpreted language."
         << "\n";
    break;
  case Cpp:
    cout << "C++ is a compiled language."
         << "\n";
    break;
  case Haskell:
    cout << "Haskell is a functional language."
         << "\n";
    break;
  default:
    cout << "Prolog is a logical language."
         << "\n";
    break;
  }

  return 0;
}
