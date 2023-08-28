#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "Harry Potter";
  char *start, *end;
  int len;
  char t;

  cout << "Original\t" << str << "\n";

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

  cout << "Reversed\t" << str << "\n";

  for (int i = 0; i < len; i++) {
    str[i] = toupper(str[i]);
  }

  cout << "Uppercase\t" << str << "\n";

  for (int j = 0; j < 3; j++) {
    char ch[80];
    cout << "\n\tEnter a Harry Potter character you like...";
    cin.getline(ch, 80);

    int count = 0;
    for (int j = 0; j < strlen(ch); j++) {
      if (ch[j] != ' ')
        count++;
    }
    cout << "- number of letters: " << count << "\n";
  }

  return 0;
}
