#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char arr[5][2][80] = {
      {"Aung Aung", "Yangon"}, {"Aye Aye", "Mon"},    {"Thin Thin", "Mon"},
      {"Ei Ei", "Yangon"},     {"Zaw Zaw", "Yangon"},
  };

  int count = 0;

  char address[80];
  cout << "Enter address to search: ";
  cin >> address;

  cout << "\n\tMatches\n";
  for (int i = 1; i < 5; i++) {
    if (!strcmp(arr[i][1], address)) {
      cout << arr[i][0] << "\t" << arr[i][1] << endl;
      count++;
    }
  }
  cout << "\n\tCount: " << count << endl;

  return 0;
}
