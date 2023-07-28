#include <iostream>
#include <regex>
using namespace std;

int main() {
  regex pattern("(0[1-9]|[1-9])|1[0-2]");
  string str1 = "10";
  string str2 = "5";
  string str3 = "12";
  string str4 = "13";
  string str5 = "09";
  string str6 = "9";

  cout << regex_match(str1, pattern) << endl;
  cout << regex_match(str2, pattern) << endl;
  cout << regex_match(str3, pattern) << endl;
  cout << regex_match(str4, pattern) << endl;
  cout << regex_match(str5, pattern) << endl;
  cout << regex_match(str6, pattern) << endl;

  return 0;
}
