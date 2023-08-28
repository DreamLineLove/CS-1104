#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "\npow()...\t" << pow(num, 2) << "\n";
  cout << "using sqrt()\t" << sqrt(num) << "\n";
  cout << "using sin()\t" << sin(num) << "\n";
  cout << "using cos()\t" << cos(num) << "\n";
  cout << "using tan()\t" << tan(num) << "\n";
  cout << "exp()\t" << exp(num) << "\n";

  return 0;
}
