#include <iostream>
using namespace std;

int main() {
  int total;
  int *ptr;
  int val;
  total = 3300;
  ptr = &total;
  val = *ptr;
  cout << "Total is: " << val << endl;
  *ptr = 4000;
  cout << "New Total is: " << total << endl;

  return 0;
}
