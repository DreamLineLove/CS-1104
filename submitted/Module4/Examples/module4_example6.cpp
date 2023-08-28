#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s1[80], s2[80];
  strcpy(s1, "We are learning C++");
  strcpy(s2, ", general-purpose programming language!");
  cout << "lengths:" << "\n";
  cout << "\ts1: " << strlen(s1) << "\n";
  cout << "\ts2: " << strlen(s2) << "\n";

  cout << "the two strings";
  if (!strcmp(s1, s2))
    cout << " are equal!" << "\n";
  else
    cout << " are not equal!" << "\n";

  strcat(s1, s2);
  cout << s1 << "\n";

  strcpy(s2, s1);
  cout << s1 << " and " << s2 << "\n";

  if (strcmp(s1, s2) == 0) {
    cout << "s1 and s2 are now the same" << "\n";
  }

  return 0;
}
