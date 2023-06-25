#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void reverseCases(char *string, int string_length);
void printOnNewLine(char string[]);

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

  // inline case reversal
  char mba15[80] = "The all new 15-inch Macbook Air starts at just $1299";
  char mba15Reverse[80];
  for (int i = 0; i < strlen(mba15); i++) {
    if (islower(mba15[i])) {
      mba15[i] = toupper(mba15[i]);
      mba15Reverse[i] = mba15[i];
    } else if (isupper(mba15[i])) {
      mba15[i] = tolower(mba15[i]);
    }
    mba15Reverse[i] = mba15[i];
  }
  cout << mba15 << endl;
  cout << mba15Reverse << endl;
  cout << endl;

  char sample[] = "All tasks at hand have been cleared!";
  printOnNewLine(sample);

  return 0;
}

void printOnNewLine(char string[]) {
  // No need to print each char out using for loop.
  // Cout can handle char array strings provided that the whole array is the
  // argument
  // ([]syntax not just the name, which instead refers to the pointer to the
  // first element of the array)
  // However, notice the special char that appears at the front of the intended
  // text
  cout << string << endl;
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
