#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[80] = "This is a cat";
  cout << str << '\n';

  int count = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (islower(str[i]))
      count++;
  }
  cout << "lowercase count: " << count << '\n';

  char str_r[80];
  char str_cap[80];

  strcpy(str_r, str);
  strcpy(str_cap, str);

  char *end;
  char *start = str_r;
  end = &(str_r[strlen(str_r) - 1]);

  while (start < end) {
    char t = *start;
    *start = *end;
    *end = t;

    start++;
    end--;
  }

  cout << str_r << '\n';

  for (int i = 0; i < strlen(str_cap); i++) {
    if (i == 0)
      str_cap[i] = toupper(str_cap[i]);
    if (isspace(str_cap[i - 1]))
      str_cap[i] = toupper(str_cap[i]);
  }

  cout << str_cap << '\n';

  return 0;
}
