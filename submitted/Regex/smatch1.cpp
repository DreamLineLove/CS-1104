#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
  string text = "Hello, my name is John Doe and I am 30 years old.";
  regex pattern(R"(\b\w+\b)");

  smatch matches;
  if (regex_search(text, matches, pattern)) {
    // Accessing the entire matched substring
    cout << "Matched: " << matches.str() << "\n";

    // Iterating over capturing groups (individual words)
    for (const auto &match : matches) {
      // Getting the matched word (capturing group)
      cout << "Captured: " << match << "\n";
    }
  }

  return 0;
}
