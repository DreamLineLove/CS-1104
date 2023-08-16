#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Square of number using pow()..." << pow(num, 2) << endl;
  cout << "Square root of number using sqrt()" << sqrt(num) << endl;

  return 0;
}
