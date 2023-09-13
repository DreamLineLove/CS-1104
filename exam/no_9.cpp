#include <iostream>
using namespace std;

class Charles {
public:
  Charles() : name("Charles") {}
  virtual void print() const {
    cout << "My name is " << name << ". I am a grandparent.\n";
  }

protected:
  string name;
};

class Harry : public Charles {
public:
  Harry() : name("Harry") {}
  virtual void print() const override {
    cout << "My name is " << name << ".\n";
  }
  void printParent() const {
    cout << "Inside Harry\n";
    Charles::print();
    cout << '\n';
  }

protected:
  string name;
};

class William : public Charles {
public:
  William() : name("William") {}
  virtual void print() const override {
    cout << "My name is " << name << ". I am a parent.\n";
  }
  void printParent() const {
    cout << "Inside William\n";
    Charles::print();
    cout << '\n';
  }

protected:
  string name;
};

class George : public William {
public:
  George() : name("George") {}
  void print() const override { cout << "My name is " << name << ".\n"; }
  void printParent() const {
    cout << "Inside George\n";
    William::print();
    cout << '\n';
  }

protected:
  string name;
};

int main() {
  Charles charles;
  Harry harry;
  William william;
  George george;

  charles.print();
  harry.print();
  william.print();
  george.print();
  cout << '\n';

  harry.printParent();
  william.printParent();
  george.printParent();

  return 0;
}
