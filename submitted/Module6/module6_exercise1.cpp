#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main() {
  int i = 6, y = 9;
  cout << i << ' ' << y << endl;

  swap(i, y);
  cout << i << ' ' << y << endl;

  return 0;
}

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}
