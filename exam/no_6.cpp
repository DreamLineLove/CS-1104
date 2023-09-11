#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void makeUppercase(char *start, char *end);

int main() {
  char str[] = "This is a cat";
  char reverse_str[80];
  char capitalized_str[80];

  strcpy(reverse_str, str);
  strcpy(capitalized_str, str);

  int i, n = strlen(reverse_str), count = 0;

  cout << "Original string" << '\n';
  cout << str << '\n';
  cout << '\n';

  cout << "Reversed string" << '\n';
  for (i = 0; i < n; i++) {
    int temp = reverse_str[i];
    reverse_str[i] = reverse_str[n - 1];
    reverse_str[n - 1] = temp;
    n--;
  }
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

  cout << "Counting lowercase letters" << '\n';
  for (i = 0; i < strlen(str); i++) {
    if (islower(str[i]))
      count++;
  }
  cout << str << "\tcount " << count << "\n";
  count = 0;
  for (i = 0; i < strlen(reverse_str); i++) {
    if (islower(reverse_str[i]))
      count++;
  }
  cout << reverse_str << "\tcount " << count << "\n";
  count = 0;
  for (i = 0; i < strlen(capitalized_str); i++) {
    if (islower(capitalized_str[i]))
      count++;
  }
  cout << capitalized_str << "\tcount " << count << "\n";
  cout << '\n';

  cout << "Turning all letters to uppercase" << '\n';
  char input[100];
  cout << "\tEnter a string: ";
  cin.getline(input, 100, '\n');

  char *end = &(input[strlen(input)]);
  makeUppercase(input, end);
  cout << input << '\n';

  return 0;
}

void makeUppercase(char *start, char *end) {
  while (start < end) {
    *start = toupper(*start);
    start++;
  }
}
