#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str1[80] = "string 1";
  char str2[80] = "string 2";

  cout << "len 1: " << strlen(str1) << "len 2: " << strlen(str2) << "\n";
  strcat(str2, str1);
  cout << "new str2:\t" << str2 << "\n";
  strcat(str2, str1);
  cout << "new str2:\t" << str2 << "\n";

  cout << "size of str2: " << sizeof(str2) / sizeof(str2[0]) << "\n";
  cout << "strlen(str2): " << strlen(str2) << "\n";

  char str3[80];
  cout << "\nempty str3: " << str3 << "\n";
  cout << "new str3:\t" << strcat(str3, "This should work though!") << "\n";

  cout << strcat(str2, str3) << "\n";

  return 0;
}
