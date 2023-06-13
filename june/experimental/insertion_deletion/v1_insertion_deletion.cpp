#include <iostream>
using namespace std;

void handleInsertionOrDeletion(string operation, int index, string value,
                               int array_size, string array[]) {
  cout << "\n\t" << operation << endl;
  cout << "- Index of the element: ";
  cin >> index;
  while (index < 0 || index >= array_size) {
    cout << "\n- Index out of bounds.\n! Index valid from 0..."
         << array_size - 1 << " only.\n- Give a valid value... ";
    cin >> index;
  }
  if (operation == "INSERTION") {
    cout << "\n- Name of the element: ";
    cin >> value;
    cout << "\n\tArray Elements" << endl;
    array[index] = value;
  } else if (operation == "DELETION") {
    cout << "\n\tArray Elements" << endl;
    array[index] = "deleted";
  }
}

void printArray(string array[], int array_size) {
  for (int i = 0; i < array_size; i++) {
    cout << " [" << i << "]\t" << array[i] << endl;
  }
  cout << endl;
}

int main() {
  cout << "\tInsertion and Deletion in Arrays" << endl;
  cout << "\t--------------------------------" << endl;

  int array_size, index;

  cout << "\n- Number of elements in the array: ";
  cin >> array_size;

  string array[array_size], value;
  bool run_loop = true;

  for (int i = 0; i < array_size; i++) {
    array[i] = "---";
  }

  handleInsertionOrDeletion("INSERTION", index, value, array_size, array);
  printArray(array, array_size);

  handleInsertionOrDeletion("DELETION", index, value, array_size, array);
  printArray(array, array_size);

  return 0;
}
