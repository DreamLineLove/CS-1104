#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int lowercaseCount(char str[], int string_length);

int main() {
  char str[14] = "Avada kedavra";
  int count = 0;
  cout << "- Original string:\n\t" << str << endl;
  count = lowercaseCount(str, 14);
  cout << "\tThere are " << count
       << " lowercase letters in the original string." << endl;

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == 'k') {
      str[i] = toupper(str[i]);
    }
  }
  cout << "\n- Start with capital case, other letters lower case:\n\t" << str
       << endl;

  count = lowercaseCount(str, 14);
  cout << "\tThere are " << count << " lowercase letters in the new string."
       << endl;

  for (int i = strlen(str) - 1; i >= 0; i--) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else if (islower(str[i])) {
      str[i] = toupper(str[i]);
    }
  }
  cout << "\n- Reversed and inverted string:\n\t" << str << endl;
  count = lowercaseCount(str, 14);
  cout << "\tThere are " << count << " lowercase letters in the new string."
       << endl;

  return 0;
}

int lowercaseCount(char str[], int string_length) {
  int count = 0;
  for (int i = 0; i < string_length; i++) {
    if (islower(str[i])) {
      count++;
    }
  }
  return count;
}
