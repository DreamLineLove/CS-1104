#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char arr[5][2][80] = {
      {"Aung Aung", "Yangon"}, {"Aye Aye", "Mon"},    {"Thin Thin", "Mon"},
      {"Ei Ei", "Yangon"},     {"Zaw Zaw", "Yangon"},
  };

  bool processed[5] = {false};
  int count = 0;

  for (int i = 0; i < 5; i++) {
    if (processed[i]) {
      continue;
    }

    count = 1;
    processed[i] = true;

    for (int j = i + 1; j < 5; j++) {
      if (strcmp(arr[i][1], arr[j][1]) == 0) {
        count++;
        processed[j] = true;
      }
    }

    if (count > 1) {
      std::cout << "Address: " << arr[i][1] << "\n";
      std::cout << "Count: " << count << "\n";
      for (int k = 0; k < 5; k++) {
        if (processed[k] && strcmp(arr[i][1], arr[k][1]) == 0) {
          std::cout << "  " << arr[k][0] << "\n";
        }
      }
      std::cout << "\n";
    }
  }

  return 0;
}
