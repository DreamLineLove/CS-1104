#include <iostream>
using namespace std;

int facti(int val);
int factr(int val);

int main() {
  int facti_result = facti(4);
  cout << facti_result << '\n';
  int factr_result = factr(4);
  cout << factr_result << '\n';
  return 0;
}

int facti(int val) {
  int result = 1;
  for (int i = 1; i <= val; i++) {
    result = result * i;
  }
  return result;
}

int factr(int val) {
  int result;
  if (val == 1) {
    return 1;
  }

  result = factr(val - 1) * val;
  return result;
}
