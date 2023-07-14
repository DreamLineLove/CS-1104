#include <iostream>
using namespace std;

int main() {
  int base[3] = {2, 12, 22};
  int loop[3][5];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      loop[i][j] = base[i] + (2 * j);
      cout << loop[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}
