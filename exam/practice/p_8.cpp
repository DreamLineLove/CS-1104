#include <iostream>
using namespace std;

class Apple {
public:
  void print() {
    cout << company_name << " is the biggest technology company in the world!"
         << '\n';
  }

protected:
  string company_name = "Apple Inc.";
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
  void printParent() {
    cout << "My parent company is " << company_name << '\n';
  }
};

class iWatch : public Apple, public AppleProduct {
public:
  iWatch(string name) { latest_product = name; }
  void print() {
    cout << latest_product << " is the latest iWatch model." << '\n';
  }
  void printParent() {
    cout << "My parent company is " << company_name << '\n';
  }
};

class Pixar : public Apple, public AppleProduct {
public:
  Pixar(string name) { latest_product = name; }
  void print() {
    cout << latest_product << " is the latest Pixar animation." << '\n';
  }
  void printParent() {
    cout << "My parent company is " << company_name << '\n';
  }
};

int main() {
  Apple apple;
  iPhone iPhone15("iPhone 15");
  iWatch iWatch9("Apple Watch 9");
  Pixar Elemental("Elemental");

  apple.print();
  cout << '\n';

  iPhone15.print();
  iPhone15.printParent();
  cout << '\n';

  iWatch9.print();
  iWatch9.printParent();
  cout << '\n';

  Elemental.print();
  Elemental.printParent();
  cout << '\n';

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
