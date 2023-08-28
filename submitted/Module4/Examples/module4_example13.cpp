#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char *p;
  int i;
  char str[80] = "This Is A Test";

  cout << "Original string: " << str << "\n";

  p = str;

  for (i = 0; i < strlen(p); i++) {
    if (isupper(p[i])) {
      p[i] = tolower(p[i]);
    } else if (islower(p[i])) {
      p[i] = toupper(p[i]);
    }
  }

  cout << "Inverted-case string: " << str << "\n";

  return 0;
}
