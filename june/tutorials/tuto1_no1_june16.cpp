#include <cctype>
#include <iostream>
using namespace std;

int countLowercaseLetters(char spell[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (islower(spell[i])) {
      count++;
    }
  }
  return count;
}

int main() {
  char spell[14] = "Avada kedavra";
  int count = 0;
  cout << "- Original string:\n\t" << spell << endl;
  count = countLowercaseLetters(spell, 14);
  cout << "\tThere are " << count
       << " lowercase letters in the original string." << endl;

  for (int i = 0; i < 14; i++) {
    if (spell[i] == 'k') {
      spell[i] = toupper(spell[i]);
    }
  }
  cout << "\n- Start with capital case, other letters lower case:\n\t" << spell
       << endl;

  count = countLowercaseLetters(spell, 14);
  cout << "\tThere are " << count << " lowercase letters in the new string."
       << endl;

  for (int i = 13; i >= 0; i--) {
    if (isupper(spell[i])) {
      spell[i] = tolower(spell[i]);
    } else if (islower(spell[i])) {
      spell[i] = toupper(spell[i]);
    }
  }
  cout << "\n- Reversed and inverted string:\n\t" << spell << endl;
  count = countLowercaseLetters(spell, 14);
  cout << "\tThere are " << count << " lowercase letters in the new string."
       << endl;

  return 0;
}
