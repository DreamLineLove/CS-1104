#include <iostream>
using namespace std;

int main() {
  int sample[10];
  int t;

  for (t = 0; t < 10; ++t)
    sample[t] = t;

  for (t = 0; t < 10; ++t)
    cout << "This is sample[" << t << "]: " << sample[t] << "\n";

  return 0;
}
