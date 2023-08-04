#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int wordCount(const string &input, const std::string &word) {
  int count = 0;
  size_t pos = 0;

  while ((pos = input.find(word, pos)) != string::npos) {
    count++;
    pos += word.length();
  }

  return count;
}

int main() {
  string fn, wordToCount;
  cout << "Enter filename...\t";
  cin >> fn;
  cout << "Word to count...\t";
  cin >> wordToCount;

  ifstream file(fn);
  string line;
  int count = 0;
  while (getline(file, line)) {
    int inner = wordCount(line, wordToCount);
    count += inner;
  }

  cout << "The word '" << wordToCount << "' appears " << count
       << " times in the text." << endl;

  return 0;
}
