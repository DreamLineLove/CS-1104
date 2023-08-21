#include <iostream>
using namespace std;

int main() {
  int n1 = 10;
  int n2 = 20;

  cout << "n1 and n2 before: \n\t" << n1 << ' ' << n2 << endl;

  int *p1 = &n1;
  int &p2 = n2;

  *p1 = 20;
  p2 = 40;

  cout << "n1 and n2 after: \n\t" << n1 << ' ' << n2 << endl;

  return 0;
}
