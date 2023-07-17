#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void strInvertCase(char *str);

int main() {
  char str[80];

  strcpy(str, "This Is A Test");
  cout << str << endl;

  strInvertCase(str);
  cout << str << endl;

  return 0;
}

void strInvertCase(char *str) {
  while (*str) {
    if (isupper(*str))
      *str = tolower(*str);
    else if (islower(*str))
      *str = toupper(*str);

    str++;
  }
}
