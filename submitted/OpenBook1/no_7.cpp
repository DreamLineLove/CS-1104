#include <iostream>
using namespace std;

int main() {
  string pw;
  while (pw != "cs@123") {
    cout << "- Enter Correct Password: ";
    cin >> pw;
  }

  cout << "\n\tCorrect password!" << endl;

  return 0;
}
