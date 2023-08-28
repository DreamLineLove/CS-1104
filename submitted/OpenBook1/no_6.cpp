#include <iostream>
using namespace std;

class Season {
public:
  string name;
  string menu[2];
};

class Season_6miles : public Season {
public:
  Season_6miles() {
    name = "Season 6 Miles";
    menu[0] = "New York Cheese Cake";
    menu[1] = "Strawberry Milkshake";
  }
};

class Season_Junction : public Season {
public:
  Season_Junction() {
    name = "Season Junction";
    menu[0] = "Eclair";
    menu[1] = "Vanilla Float";
  }
};

class Season_Ocean : public Season {
public:
  Season_Ocean() {
    name = "Season Ocean";
    menu[0] = "Pizza Bread";
    menu[1] = "Iced Americano";
  }
};

int main() {
  Season_6miles six_mile;
  Season_Junction junction;
  Season_Ocean ocean;
  Season arr[3] = {
      six_mile,
      junction,
      ocean,
  };

  for (int i = 0; i < 3; i++) {
    cout << "\t" << arr[i].name << " Menu" << "\n";
    cout << "\t"
         << "-----------------" << "\n";
    for (int j = 0; j < 2; j++) {
      cout << j + 1 << ".\t" << arr[i].menu[j] << "\n";
    }
    cout << "\n";
  }

  return 0;
}
