#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "This is a cat";

  int i, n = strlen(str);

  for (i = 0; i < n; i++) {
    int temp = str[i];
    str[i] = str[n - 1];
    str[n - 1] = temp;
    n--;
    cout << n << '\n';
  }

  cout << str << '\n';

  return 0;
}
