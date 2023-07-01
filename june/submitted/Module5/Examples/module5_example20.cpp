#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    cout << argv[i] << endl;
  }

  char isee[] = "9.99";
  cout << atof(isee);

  return 0;
}
