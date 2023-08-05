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
  cout << "\tWORD COUNTER" << endl;
  cout << "\n- enter q as 'word to count' to exit" << endl;
  string fn, wordToCount;

  cout << "\n- enter filename: ";
  cin >> fn;
  cout << endl;

  while (wordToCount != "q") {
    cout << "\n-\tEnter word to count: ";
    cin >> wordToCount;

    ifstream file(fn);
    string line;
    int count = 0;
    while (getline(file, line)) {
      int inner = wordCount(line, wordToCount);
      count += inner;
    }

    cout << "\n\tThe word '" << wordToCount << "' appears " << count
         << " times in the text." << endl;
    cout << "\n------------------------------------------------------" << endl;

    count = 0;
    file.close();
  }

  cout << "\n-\tProgram exited" << endl;

  return 0;
}
