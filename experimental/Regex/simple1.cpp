#include <iostream>
using namespace std;

int main() {
  string search_word = "preamble";

  string arr[2][3] = {
      {"sample", "Sample", "example"},
      {"Sample", "sample", "preamble"},
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] == search_word) {
        cout << search_word << " found at location " << i << ":" << j << "\n";
      }
    }
  }
}
