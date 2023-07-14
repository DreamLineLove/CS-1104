#include <iostream>
using namespace std;

int main() {
  int multi[24];
  int i;

  for (i = 2; i < 25; i++)
    multi[i] = 9 * i;

  for (i = 2; i < 25; i++)
    cout << "9 x " << i << " = " << multi[i] << endl;

  return 0;
}
