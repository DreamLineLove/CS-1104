#include <iostream>
#include <regex>
using namespace std;

void use_regex(string input, regex pattern);

int main() {
  string ml_words[6] = {"sample", "example", "preamble",
                        "Sample", "Example", "Preamble"};

  regex pattern("(s|ex)ample", regex_constants::icase);

  for (int i = 0; i < 6; i++) {
    use_regex(ml_words[i], pattern);
    cout << '\n';
  }

  return 0;
}

void use_regex(string input, regex pattern) {
  if (regex_match(input, pattern)) {
    cout << input << " is the same" << '\n';
  } else {
    cout << input << " is NOT the same" << '\n';
  }
}
