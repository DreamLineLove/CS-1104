#include <iostream>
using namespace std;

int checkIndexOutOfBounds(string mode, int array_size) {
  int index;
  if (mode == "insertion") {
    cout << "index you would like to insert at: ";
    cin >> index;
  } else if (mode == "deletion") {
    cout << "index you would like to delete from: ";
    cin >> index;
  }
  while (index < 0 || index >= array_size) {
    cout << "\nindex must be between 0 and " << array_size - 1 << "!" << endl;
    cout << "index you would like to insert at: ";
    cin >> index;
  }

  return index;
}

void insertion(int index, string array[], int array_size) {
  string input;
  cout << "name of the element: ";
  cin >> input;
  array[index] = input;

  cout << "\n\tArray elements" << endl;
  for (int i = 0; i < array_size; i++) {
    cout << "  \"" << array[i] << "\"" << endl;
  }
}

void deletion(int index, string array[], int array_size) {
  array[index] = "";
  cout << "\n\tArray elements" << endl;
  for (int i = 0; i < array_size; i++) {
    cout << "  \"" << array[i] << "\"" << endl;
  }
}

int main() {
  int array_size;
  cout << "size of the array: ";
  cin >> array_size;

  string array[array_size];
  for (int i = 0; i < array_size; i++) {
    array[i] = "";
  }

  int index;
  cout << "\n\tInsertion" << endl;
  index = checkIndexOutOfBounds("insertion", array_size);
  insertion(index, array, array_size);
  cout << endl;
  cout << "\n\tDeletion" << endl;
  index = checkIndexOutOfBounds("deletion", array_size);
  deletion(index, array, array_size);

  return 0;
}
