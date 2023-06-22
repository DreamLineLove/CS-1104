#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void reverseCases(char *string, int string_length);

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

  // strlen
  reverseCases(avatar, strlen(avatar));
  cout << avatar << endl;
  cout << endl;

  // strcmp
  char avatarReverse[80] = "aVATAR THE lAST aIRBENDER";
  if (strcmp(avatar, avatarReverse) == 0) {
    cout << avatar << " and " << avatarReverse << " are equal!" << endl;
  }
  cout << endl;

  return 0;
}

void reverseCases(char *string, int string_length) {
  for (int i = 0; i < string_length; i++) {
    if (islower(*string)) {
      *string = toupper(*string);
    } else if (isupper(*string)) {
      *string = tolower(*string);
    }
    string++;
  }
}
