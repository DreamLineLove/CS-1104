#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string text = "Hello, my name is John Doe and I am 30 years old.";
  std::regex pattern(R"(\b\w+\b)");

  std::smatch matches;
  if (std::regex_search(text, matches, pattern)) {
    // Accessing the entire matched substring
    std::cout << "Matched: " << matches.str() << std::"\n";

    // Iterating over capturing groups (individual words)
    for (const auto &match : matches) {
      // Getting the matched word (capturing group)
      std::cout << "Captured: " << match << std::"\n";
    }
  }

  return 0;
}
