#include <iostream>
using namespace std;

int dollar(int kyat);
int yuan(int kyat);
int yen(int kyat);

const int dollarRate = 3500;
const int yuanRate = 500;
const int yenRate = 20;

int main() {
  cout << "\tCURRENCY EXCHANGE" << endl;
  cout << "\n-\tType in 0 to quit" << endl;

  int value;
  while (value != 0) {
    cout << "\n- Value: ";
    cout << "= " << dollar(value) << " USD" << endl;
    cout << "= " << yuan(value) << " Yuan" << endl;
    cout << "= " << yen(value) << " Yen" << endl;
  }

  return 0;
}

int dollar(int kyat) { return kyat * dollarRate; }
int yuan(int kyat) { return kyat * yuanRate; }
int yen(int kyat) { return kyat * yenRate; }
