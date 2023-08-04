#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void reverse();
void touppercase();

int main() {
  char hp[] = "Harry Potter";
  int len = strlen(hp);
  char *start = hp, *end = &hp[len - 1];
  char ch;

  cout << "Original:\t" << hp << endl;
  while (start < end) {
    ch = *start;
    *start = *end;
    *end = ch;

    start++;
    end--;
  }
  cout << "Reversed:\t" << hp << endl;
  for (int i = 0; i < len; i++) {
    hp[i] = toupper(hp[i]);
  }
  cout << "Uppercase:\t" << hp << endl;

  for (int j = 0; j < 2; j++) {
    string character;
    cout << "\nEnter a character you like from Harry Potter: ";
    cin >> character;
  }

  return 0;
}

void reverse(char ch, char *start, char *end) {}
