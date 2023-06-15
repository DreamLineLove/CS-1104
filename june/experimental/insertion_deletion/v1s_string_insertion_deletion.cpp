#include <iostream>
using namespace std;

int checkIndexOutOfBounds(int array_size) {
  int index;
  cout << "index you would like to insert at: ";
  cin >> index;
  while (index < 0 || index >= array_size) {
    cout << "\nindex must be between 0 and " << array_size - 1 << "!" << endl;
    cout << "index you would like to insert at: ";
    cin >> index;
  }

  return index;
}

void insertion(int index, string array[], int array_size) {
  cout << "\n\tInsertion";
  string input;
  cout << "\nname of the element: ";
  cin >> input;
  array[index] = input;

  cout << "\n\tArray elements" << endl;
  for (int i = 0; i < array_size; i++) {
    cout << "  \"" << array[i] << "\"" << endl;
  }
}

void deletion(string array[], int array_size) {
  cout << "\tDeletion";
  string input;
  cout << "\nname of the element you want to delete: ";
  cin >> input;
  for (int i = 0; i < array_size; i++) {
    if (array[i] == input) {
      array[i] = "";
    }
  }
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
  index = checkIndexOutOfBounds(array_size);
  insertion(index, array, array_size);
  cout << endl;
  deletion(array, array_size);

  return 0;
}
