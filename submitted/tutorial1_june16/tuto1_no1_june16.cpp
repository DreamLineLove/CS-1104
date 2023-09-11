#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int lowercaseCount(char str[], int str_len);

int main() {
  char str[14] = "Avada kedavra";
  int count = 0;
  cout << "- Original string:\n\t" << str << "\n";
  count = lowercaseCount(str, 14);
  cout << "\tThere are " << count
       << " lowercase letters in the original string." << "\n";

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == 'k') {
      str[i] = toupper(str[i]);
    }
  }
  cout << "\n- Start with capital case, other letters lower case:\n\t" << str
       << "\n";

  count = lowercaseCount(str, 14);
  cout << "\tThere are " << count << " lowercase letters in the new string."
       << "\n";

  for (int i = strlen(str) - 1; i >= 0; i--) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else if (islower(str[i])) {
      str[i] = toupper(str[i]);
    }
  }
  cout << "\n- Reversed and inverted string:\n\t" << str << "\n";
  count = lowercaseCount(str, 14);
  cout << "\tThere are " << count << " lowercase letters in the new string."
       << "\n";

  return 0;
}

int lowercaseCount(char str[], int str_len) {
  int count = 0;
  for (int i = 0; i < str_len; i++) {
    if (islower(str[i])) {
      count++;
    }
  }
  return count;
}
