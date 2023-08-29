#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const char guess_word[] = "Diablo";

int main() {
  char guess[80];

  do {
    cout << "What is my favourite game?"
         << "\n";
    scanf("%79s", guess);
  } while (strcmp(guess_word, guess) != 0);

  cout << "\nCorrect!"
       << "\n";

  return 0;
}
