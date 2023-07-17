#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[80] = "this should become uppercase letters";
  cout << "original:\t" << str << endl;
  for (int i = 0; i < strlen(str); i++) {
    str[i] = toupper(str[i]);
  }
  cout << "modified:\t" << str << endl;

  return 0;
}
