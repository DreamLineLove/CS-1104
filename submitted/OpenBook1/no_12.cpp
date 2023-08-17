#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "\npow()...\t" << pow(num, 2) << endl;
  cout << "using sqrt()\t" << sqrt(num) << endl;
  cout << "using sin()\t" << sin(num) << endl;
  cout << "using cos()\t" << cos(num) << endl;
  cout << "using tan()\t" << tan(num) << endl;
  cout << "exp()\t" << exp(num) << endl;

  return 0;
}
