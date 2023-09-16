#include <iostream>
#include <regex>
using namespace std;

void use_regex(regex pattern, string input) {
  if (regex_match(input, pattern))
    cout << input << " is the same!" << '\n';
  else
    cout << input << " is NOT the same!" << '\n';
}

int main() {
  string ML_words[6] = {"sample", "example", "preamble",
                        "Sample", "Example", "Preamble"};

  regex pattern("(s|ex)ample", regex_constants::icase);

  for (int i = 0; i < 6; i++) {
    use_regex(pattern, ML_words[i]);
    cout << '\n';
  }

  return 0;
}
