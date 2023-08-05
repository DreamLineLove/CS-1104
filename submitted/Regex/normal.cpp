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
  cout << "\tWord Counter" << endl;
  cout << "\n-\tEnter q as filename to exit\n" << endl;
  string fn, wordToCount;

  cout << "enter filename: ";
  cin >> fn;
  ifstream file(fn);

  while (wordToCount != "q") {
    cout << "enter word to count: ";
    cin >> wordToCount;

    string line;
    int count = 0;
    while (getline(file, line)) {
      int inner = wordCount(line, wordToCount);
      count += inner;
    }

    cout << "\tRESULT" << endl;
    cout << "\t------" << endl;
    cout << "\n-\tThe word '" << wordToCount << "' appears " << count
         << " times in the text." << endl;
  }

  file.close();
  cout << "\n-\tProgram exited" << endl;

  return 0;
}
