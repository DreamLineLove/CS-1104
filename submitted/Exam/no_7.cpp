#include <iostream>
#include <regex>
using namespace std;

void use_regex_match(regex regex_pattern, string str);

int main() {
  string sample = "sample";
  string example = "example";
  string preamble = "preamble";

  // In machine learning literature, sample and example are the same.
  // Using regex to write the regex pattern...
  string pattern_str = "sample|example";
  regex regex_pattern(pattern_str);

  cout << "Regex pattern: " << pattern_str << "\n\n";
  use_regex_match(regex_pattern, sample);
  use_regex_match(regex_pattern, example);
  use_regex_match(regex_pattern, preamble);

  return 0;
}

void use_regex_match(regex regex_pattern, string input) {
  if (regex_match(input, regex_pattern)) {
    cout << input << " matches" << '\n';
  } else {
    cout << input << " does not match" << '\n';
  }
}
