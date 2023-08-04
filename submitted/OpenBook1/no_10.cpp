#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "Harry Potter";
  char *start, *end;
  int len;
  char t;

  cout << "Original: " << str << endl;

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

  cout << "Reversed: " << str << endl;

  for (int i = 0; i < len; i++) {
    str[i] = toupper(str[i]);
  }

  cout << "Uppercase: " << str << endl;

  for (int j = 0; j < 2; j++) {
    char ch[80];
    cout << "Enter a Harry Potter character you like...";
    cin >> ch;
    cout << "The number of letters: " << strlen(ch) << endl;
  }

  return 0;
}
