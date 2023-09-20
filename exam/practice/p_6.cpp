#include <cstring>
#include <iostream>
using namespace std;

void changeIntoUppercase(char str[], int len);

int main() {
  char str[80] = "This is a cat";

  cout << "Original string: " << str << '\n';
  cout << '\n';

  int count = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (islower(str[i]))
      count++;
  }
  cout << "There are " << count << " lowercase letters." << '\n';
  cout << '\n';

  char r_str[80], c_str[80];

  strcpy(r_str, str);
  strcpy(c_str, str);

  char *start, *end;
  start = r_str;
  end = &(r_str[strlen(r_str) - 1]);

  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }

  cout << "Reversed string: " << r_str << '\n';
  cout << '\n';

  for (int i = 0; i < strlen(c_str); i++) {
    if (i == 0)
      c_str[i] = toupper(c_str[i]);
    if (isspace(c_str[i - 1]))
      c_str[i] = toupper(c_str[i]);
  }

  cout << "Each phrase start with capital letter: " << c_str << '\n';
  cout << '\n';

  changeIntoUppercase(str, strlen(str));
  cout << "Original array all uppercase: " << str << '\n';

  return 0;
}

void changeIntoUppercase(char str[], int len) {
  for (int i = 0; i < len; i++) {
    str[i] = toupper(str[i]);
  }
}
