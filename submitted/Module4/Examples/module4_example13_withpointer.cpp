#include <iostream>
using namespace std;

void invertCase(char *p);

int main() {
  char str[] = "Try Inverting This String";
  char *p = str;
  cout << "Original string: " << str << "\n";

  invertCase(p);
  cout << "Original string: " << str << "\n";

  return 0;
}

void invertCase(char *p) {
  for (int i = 0; p[i]; i++) {
    if (islower(p[i])) {
      p[i] = toupper(p[i]);
    } else if (isupper(p[i])) {
      p[i] = tolower(p[i]);
    }
  }
}
