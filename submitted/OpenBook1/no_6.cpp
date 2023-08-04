#include <iostream>
using namespace std;

class Season {
public:
  string name;
  string menu[2];
};

class Season_6miles : public Season {
public:
  string name = "Season 6 Miles";
  Season_6miles() {
    menu[0] = "New York Cheese Cake";
    menu[1] = "Strawberry Milkshake";
  }
};

class Season_Junction : public Season {
public:
  string name = "Season Junction";
  Season_Junction() {
    menu[0] = "Eclair";
    menu[1] = "Vanilla Float";
  }
};

class Season_Ocean : public Season {
public:
  string name = "Season Ocean";
  Season_Ocean() {
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

  return 0;
}
