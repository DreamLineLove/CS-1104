#include <iostream>
using namespace std;

int main() {
  int array_size;
  string array[array_size];
  bool run_loop = true;

  cout << "Number of elements in the array: ";
  cin >> array_size;

  while (run_loop) {
    string mode;
    cout << "Do you want to insert \"i\", delete (\"d\") or quit (\"q\")? ";
    cin >> mode;

    if (mode == "q") {
      run_loop = false;
    } else if (mode == "i") {
      string value;
      int index;

      cout << "Enter index: ";
    }
  }

  return 0;
}
