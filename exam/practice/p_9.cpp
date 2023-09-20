#include <iostream>
using namespace std;

class Charles {
public:
  void print() { cout << "I am " << full_name << ".\n"; }

protected:
  string full_name = "King Charles III";
};

class William : public Charles {
public:
  void print() {
    cout << "I am " << full_name << " and my father is " << Charles::full_name
         << ".\n";
  }

protected:
  string full_name = "Crown Prince William";
};

class Harry : public Charles {
public:
  void print() {
    cout << "I am " << full_name << " and my father is " << Charles::full_name
         << ".\n";
  }

protected:
  string full_name = "Prince Harry";
};

class George : public William {
public:
  void print() {
    cout << "I am " << full_name << " and my father is " << William::full_name
         << ".\n";
  }
  void printGrandfather() {
    cout << "My grandfather is " << Charles::full_name << ".\n";
  }

protected:
  string full_name = "Prince George";
};

int main() {
  Charles charles;
  William william;
  Harry harry;
  George george;

  charles.print();
  cout << '\n';

  william.print();
  cout << '\n';

  harry.print();
  cout << '\n';

  george.print();
  george.printGrandfather();
  cout << '\n';

  return 0;
}
