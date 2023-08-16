#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Square of number using pow()..." << pow(num, 2) << endl;
  cout << "Square root of number using sqrt()" << sqrt(num) << endl;
  cout << "Sine of number using sin()" << sin(num) << endl;
  cout << "Cosine of number using cos()" << cos(num) << endl;
  cout << "Tangent of number using tan()" << tan(num) << endl;
  cout << "Exponent of number using exp()" << exp(num) << endl;

  return 0;
}
