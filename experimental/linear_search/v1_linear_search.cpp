#include <iostream>
using namespace std;

bool linearSearch(int array[], int array_size, int search_value,
                  int *position) {
  bool return_value = false;
  for (int i = 0; i < array_size; i++) {
    if (array[i] == search_value) {
      return_value = true;
      *position = i;
      break;
    }
  }
  return return_value;
}

int main() {
  int array[] = {
      5, 56, 65, 5665, 6556,
  };
  int search_value, position;
  int array_size = sizeof(array) / sizeof(array[0]);

  cout << "\tLINEAR SEARCH" << endl;
  cout << "\n- Enter search value: ";
  cin >> search_value;

  bool found = linearSearch(array, array_size, search_value, &position);

  if (found) {
    cout << "\n\tFOUND at position: " << position << endl;
  } else {
    cout << "\n\tNOT FOUND" << endl;
  }

  return 0;
}
