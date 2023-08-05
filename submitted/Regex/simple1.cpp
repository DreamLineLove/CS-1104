#include <iostream>
using namespace std;

int main() {
  string value;
  cin >> value;

  string word = "sample";
  if (value == word) {
    cout << "value contains sample";
  } else {
    cout << "value does not contain sample";
  }
}
