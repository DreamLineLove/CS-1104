#include <cstring>
#include <iostream>
using namespace std;

void changeToUppercase(char str[], int n) {
  for (int i = 0; i < n; i++) {
    str[i] = toupper(str[i]);
  }
}

int main() {
  char str[80] = "This is a cat";
  char rstr[80], cstr[80];

  strcpy(rstr, str);
  strcpy(cstr, str);

  cout << "original string: " << str << '\n';
  cout << '\n';

  int count = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (islower(str[i]))
      count++;
  }
  cout << "There are " << count << " lowercase letters.\n";
  cout << '\n';

  char *start, *end;
  start = rstr;
  end = &(rstr[strlen(rstr) - 1]);
  while (start < end) {
    char t = *start;
    *start = *end;
    *end = t;

    start++;
    end--;
  }

  cout << "reversed string: " << rstr << '\n';
  cout << '\n';

  for (int i = 0; i < strlen(cstr); i++) {
    if (i == 0) {
      cstr[i] = toupper(cstr[i]);
    }
    if (isspace(str[i - 1]))
      cstr[i] = toupper(cstr[i]);
  }
  cout << "each phrase starts with capital: " << cstr << '\n';
  cout << '\n';

  changeToUppercase(str, strlen(str));
  cout << "uppercase letters: " << str << '\n';

  return 0;
}
