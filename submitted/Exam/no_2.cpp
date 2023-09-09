#include <iostream>
using namespace std;

int main() {
  string correct_pw = "i@CS";
  string pw;

  do {
    cout << "Enter the correct password: ";
    cin >> pw;
  } while (pw != correct_pw);

  return 0;
}
