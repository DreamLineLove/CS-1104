#include <iostream>
using namespace std;

class Charles {
public:
  Charles() : name("Charles"){};
  virtual void printName() const {
    cout << "My name is " << name << ". I am a grandparent.\n";
  }

protected:
  string name;
};

class Harry : public Charles {
public:
  Harry() : name("Harry"){};
  virtual void printName() const override {
    cout << "My name is " << name << ".\n";
  }
  void printParentName() const {
    cout << "Inside Harry\n";
    Charles::printName();
  }

protected:
  string name;
};

class William : public Charles {
public:
  William() : name("William"){};
  virtual void printName() const override {
    cout << "My name is " << name << ". I am a parent.\n";
  }
  void printParentName() const {
    cout << "Inside William\n";
    Charles::printName();
  }

protected:
  string name;
};

class George : public William {
public:
  George() : name("George"){};
  void printName() const override { cout << "My name is " << name << ".\n"; }
  void printParentName() const {
    cout << "Inside George\n";
    William::printName();
  }

protected:
  string name;
};

int main() {
  Charles charles;
  Harry harry;
  William william;
  George george;

  charles.printName();
  harry.printName();
  william.printName();
  george.printName();
  cout << '\n';

  harry.printParentName();
  william.printParentName();
  george.printParentName();

  return 0;
}
