#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "this is a test";
  char *start, *end;
  int len;
  char t;

  cout << "Original: " << str << "\n";

  len = strlen(str);

  start = str;
  end = &str[len - 1];

  while (start < end) {
    t = *start;
    *start = *end;
    *end = t;

    start++;
    end--;
  }

  cout << "Reversed: " << str << "\n";

  return 0;
}
