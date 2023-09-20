#include <iostream>
using namespace std;

class Apple {
public:
  void print() {
    cout << full_name << " is the biggest technology company in the world!"
         << '\n';
  }

protected:
  string full_name = "Apple Inc.";
};

class AppleProduct {
protected:
  string latest_product;
};

class iPhone : public Apple, public AppleProduct {
public:
  iPhone(string name) { latest_product = name; }
  void print() {
    cout << latest_product << " is the latest iPhone model." << '\n';
  }
};

class iWatch : public Apple, public AppleProduct {
public:
  iWatch(string name) { latest_product = name; }
  void print() {
    cout << latest_product << " is the latest iWatch model." << '\n';
  }
};

class Pixar : public Apple, public AppleProduct {
public:
  Pixar(string name) { latest_product = name; }
  void print() {
    cout << latest_product << " is the latest Pixar animation." << '\n';
  }
};

int main() {
  Apple apple;
  iPhone iPhone15("iPhone 15");
  iWatch iWatch9("Apple Watch 9");
  Pixar Elemental("Elemental");

  apple.print();
  iPhone15.print();
  iWatch9.print();
  Elemental.print();

  return 0;
}

// Encapsulation
// Apple and AppleProduct use "protected" which is a form of encapsulation.

// Polymorphism
// Although Apple has print(), its children classes iPhone, iWatch, and Pixar
// also have print() that do different things. iPhone, iWatch, and Pixar
// therefore have polymorphism.

// Multiple inheritance
// iPhone, iWatch, and Pixar inherit from both Apple and AppleProduct.
