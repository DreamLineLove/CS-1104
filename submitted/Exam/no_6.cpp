#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "This is a cat";
  char reverse_str[80];
  char capitalized_str[80];

  strcpy(reverse_str, str);
  strcpy(capitalized_str, str);

  int i, n = strlen(reverse_str);

  cout << "Original string" << '\n';
  cout << str << '\n';
  cout << '\n';

  for (i = 0; i < n; i++) {
    int temp = reverse_str[i];
    reverse_str[i] = reverse_str[n - 1];
    reverse_str[n - 1] = temp;
    n--;
  }

  cout << "Reversed string" << '\n';
  cout << reverse_str << '\n';
  cout << '\n';

  cout << "Start of each word capitalized" << '\n';
  for (i = 0; i < capitalized_str[i] != '\0'; i++) {
    if (i == 0)
      capitalized_str[i] = toupper(capitalized_str[i]);
    else if (isspace(capitalized_str[i - 1]))
      capitalized_str[i] = toupper(capitalized_str[i]);
  }
  cout << capitalized_str << '\n';
  cout << '\n';

  return 0;
}
