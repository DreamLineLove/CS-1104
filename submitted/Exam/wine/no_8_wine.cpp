#include <iostream>
#include <string>
using namespace std;

class Child {
public:
  string name;

public:
  Child(string a) { name = a; }
};

class Apple {
public:
  string Pname;

public:
  Apple(string b) { Pname = b; }
};

class iPhone : public Child, public Apple {
public:
  iPhone(string a, string b) : Child("iPhone"), Apple("Apple") {}
  void display() {
    cout << "Child company = " << name << endl;
    cout << "Parent company = " << Pname << endl;
  }
};

int main() {
  iPhone iphone("iPhone", "Apple");
  iphone.display();

  return 0;
}
