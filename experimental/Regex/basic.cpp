#include <iostream>
#include <regex>
using namespace std;

void another();

int main() {
  regex pattern("(0[1-9]|[1-9])|1[0-2]");
  string str1 = "10";
  string str2 = "5";
  string str3 = "12";
  string str4 = "13";
  string str5 = "09";
  string str6 = "9";

  cout << regex_match(str1, pattern) << "\n";
  cout << regex_match(str2, pattern) << "\n";
  cout << regex_match(str3, pattern) << "\n";
  cout << regex_match(str4, pattern) << "\n";
  cout << regex_match(str5, pattern) << "\n";
  cout << regex_match(str6, pattern) << "\n";

  another();

  return 0;
}

void another() {
  cout << "\n";
  regex pattern(
      "((0[1-9]|[1-9])|1[0-9]|2[0-9])/((0[1-9]|[1-9])|1[0-2])/(\\d{4})");
  string str1 = "05/11/2004";
  string str2 = "6/11/2004";
  string str3 = "17/11/2004";
  string str4 = "28/11/2345";
  string str5 = "32/11/2344";
  cout << regex_match(str1, pattern) << "\n";
  cout << regex_match(str2, pattern) << "\n";
  cout << regex_match(str3, pattern) << "\n";
  cout << regex_match(str4, pattern) << "\n";
  cout << regex_match(str5, pattern) << "\n";
}
