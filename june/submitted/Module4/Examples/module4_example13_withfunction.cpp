#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void invertCase(char *c, int size);

int main() {
  char str[] = "Try Inverting This String";
  int size = strlen(str);
  cout << "Original string: " << str << endl;

  invertCase(str, size);
  cout << "Original string: " << str << endl;

  return 0;
}

void invertCase(char *c, int size) {
  for (int i = 0; i < size; i++) {
    if (islower(*c)) {
      *c = toupper(*c);
    } else if (isupper(*c)) {
      *c = tolower(*c);
    }
    c++;
  }
}
