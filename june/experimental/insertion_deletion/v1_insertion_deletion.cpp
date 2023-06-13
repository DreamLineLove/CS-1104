#include <iostream>
using namespace std;

int main() {
  int array_size, index;
  string array[array_size], value;
  bool run_loop = true;

  cout << "\tInsertion Deletion in an Array" << endl;
  cout << "\t------------------------------\n" << endl;
  cout << "- Number of elements in the array: ";
  cin >> array_size;

  cout << "- Index of the element: ";
  cin >> index;
  while (index < 0 || index >= array_size) {
    cout << "\n! Index out of bounds!\n- Index valid from 0...up to "
         << array_size - 1 << ": ";
    cin >> index;
  }

  cout << "- Name of the element: ";
  cin >> value;
  cout << "\n\tARRAY ELEMENTS" << endl;

  array[index] = value;

  for (int i = 0; i < array_size; i++) {
    if (i != index) {
      array[i] = "---";
    }
    cout << " " << i << ".\t" << array[i] << endl;
  }

  return 0;
}
