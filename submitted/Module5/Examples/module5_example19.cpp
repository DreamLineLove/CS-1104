#include <iostream>
using namespace std;

char *get_substr(char *sub, char *str);

int main() {
  char *substr;
  char str1[] = "three";
  char str2[] = "one two three four";

  substr = get_substr(str1, str2);

  cout << "substring found: " << substr << endl;

  return 0;
}

char *get_substr(char *sub, char *str) {
  int t;
  char *p, *p2, *start;

  for (t = 0; str[t]; t++) {
    p = &str[t];
    start = p;
    p2 = sub;
    while (*p2 && *p2 == *p) {
      p++;
      p2++;
    }

    if (!*p2)
      return start;
  }
  return 0;
}
