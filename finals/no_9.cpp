#include <iostream>
using namespace std;

class Charles {
public:
  Charles() : name("Charles") {}
  virtual void print() const {
    cout << "My name is " << name << ".\nI am a grandparent.\n";
    cout << '\n';
  }

protected:
  string name;
};

class Harry : public Charles {
public:
  Harry() : name("Harry") {}
  virtual void print() const override {
    cout << "My name is " << name << ".\nI am an uncle.\n";
  }
  void printParent() const {
    cout << "My parent's name is " << Charles::name << ".\n";
    cout << '\n';
  }

protected:
  string name;
};

class William : public Charles {
public:
  William() : name("William") {}
  virtual void print() const override {
    cout << "My name is " << name << ".\nI am a parent.\n";
  }
  void printParent() const {
    cout << "My parent's name is " << Charles::name << ".\n";
    cout << '\n';
  }

protected:
  string name;
};

class George : public William {
public:
  George() : name("George") {}
  void print() const override {
    cout << "My name is " << name << ".\nI am a grandson.\n";
  }
  void printParent() const {
    cout << "My parent's name is " << William::name << ".\n";
  }
  void printGrandparent() const {
    cout << "My grandparent's name is " << Charles::name << ".\n";
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

  cout << "\tInside Charles\n";
  charles.print();

  cout << "\tInside Harry\n";
  harry.print();
  harry.printParent();

  cout << "\tInside William\n";
  william.print();
  william.printParent();

  cout << "\tInside George\n";
  george.print();
  george.printParent();
  george.printGrandparent();

  return 0;
}
