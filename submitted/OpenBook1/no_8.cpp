#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n_people = n_people;
  char arr[n_people][2][80];
  bool processed[n_people];
  for (int i = 0; i < n_people; i++) {
    int count = 0;
    for (int j = 0; j < n_people; j++) {
      if (strcmp(arr[i][1], arr[j][1]) == 0 &&
          strcmp(arr[i][0], arr[j][0]) != 0 && processed[j] != false) {
        count++;
        processed[j] = true;
        if (count == 1)
          cout << arr[i][0] << endl;
        cout << arr[j][0] << endl;
      }
    }
  }

  return 0;
}
