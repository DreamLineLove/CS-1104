#include <iostream>
using namespace std;

void cube(int *n, int num);

int main() {
  int i, nums[10];

  for (i = 0; i < 10; i++)
    nums[i] = i + 1;

  cout << "Original contents: ";
  for (i = 0; i < 10; i++)
    cout << nums[i] << ' ';
  cout << endl;

  cube(nums, 10);

  cout << "Altered contents: ";
  for (i = 0; i < 10; i++)
    cout << nums[i] << ' ';
  cout << endl;

  return 0;
}

void cube(int *n, int num) {
  for (int i = 0; i < num; i++) {
    *n = *n * *n * *n;
    n++;
  }
}
