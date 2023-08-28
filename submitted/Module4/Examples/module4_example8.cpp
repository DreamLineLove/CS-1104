#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int i;
  char str[80];
  char phone_numbers[10][80] = {
      "Tom",    "555-3322", "Mary",   "555-8976",
      "Rachel", "555-1400", "Sherry", "555-8873",
  };

  cout << "Enter name: ";
  cin >> str;

  for (i = 0; i < 10; i += 2) {
    if (!strcmp(str, phone_numbers[i])) {
      cout << "Number is " << phone_numbers[i + 1] << "\n";
      break;
    }
  }

  if (i == 10)
    cout << "Not found." << "\n";

  return 0;
}
