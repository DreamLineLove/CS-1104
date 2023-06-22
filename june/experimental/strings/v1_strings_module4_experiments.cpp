#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void reverseCases(char *string, int size);

int main() {
  // strcpy
  char blumentopf[80];
  char blumen[] = "Vier Blumen stecken in dem Blumentopf.";
  strcpy(blumentopf, blumen);
  cout << blumentopf << endl;
  cout << endl;

  // strcat
  char avatar[80] = "Avatar";
  char avatarCompleter[80] = " the Last Airbender";
  strcat(avatar, avatarCompleter);
  cout << avatar << endl;

  reverseCases(avatar, 80);
  cout << avatar << endl;

  return 0;
}

void reverseCases(char *string, int size) {
  for (int i = 0; i < size; i++) {
    if (islower(*string)) {
      *string = toupper(*string);
    } else if (isupper(*string)) {
      *string = tolower(*string);
    }
    string++;
  }
}
