#include <iostream>
using namespace std;

class Customer {
protected:
  int orders;
};

class User {
protected:
  string name;
};

class OnlineCustomer : public Customer, public User {
public:
  void setInfo(string n, int o) {
    name = n;
    orders = o;
  }
  void printInfo() {
    cout << "Name: " << name << "\n";
    cout << "Orders: " << orders << "\n";
  }
};

int main() {
  OnlineCustomer oc;
  oc.setInfo("John", 20);
  oc.printInfo();

  return 0;
}
