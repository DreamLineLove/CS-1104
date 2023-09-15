#include <iostream>
using namespace std;

int main() {
  int start, end, diff;

  cout << "give starting number";
  cin >> start;

  cout << "give ending number";
  cin >> end;

  diff = end - start;

  int arr[diff + 1][10];

  for (int i = 0; i <= diff; i++) {
    for (int j = 0; j < 10; j++) {
      arr[i][j] = (i + start) * (j + 1);
      cout << i + start << " * " << j + 1 << " = " << arr[i][j] << '\n';
    }
    cout << '\n';
  }

  return 0;
}
