#include <iostream>
using namespace std;

class Apple {
public:
  Apple() : full_name("Apple Inc.") {}

  virtual void print() const {
    cout << full_name << " is the most valuable company in the world.\n"
         << '\n';
  }

protected:
  string full_name;
};

class AppleProduct {
public:
  AppleProduct(const int price) : made_in("China"), price_usd(price) {}

protected:
  string made_in;
  int price_usd;
};

class Pixar : public Apple {
public:
  Pixar() : full_name("Pixar Animation Studios") {}

  void print() const override {
    cout << "Name of company: " << full_name << '\n';
  }
  void printParent() {
    cout << "- My parent company name is " << Apple::full_name << '\n';
    cout << '\n';
  }

private:
  string full_name;
};

class iPhone : public Apple, public AppleProduct {
public:
  iPhone() : latest_model("iPhone 15"), AppleProduct(799) {}

  void print() const override {
    cout << "Latest iPhone model: " << latest_model << '\n';
    cout << "price: $" << price_usd << '\n';
    cout << "Made in: " << made_in << '\n';
  }
  void printParent() {
    cout << "- My parent company name is " << Apple::full_name << '\n';
    cout << '\n';
  }

private:
  string latest_model;
};

class iWatch : public Apple, public AppleProduct {
public:
  iWatch() : latest_model("Apple Watch Series 9"), AppleProduct(399) {}

  void print() const override {
    cout << "Latest iWatch model: " << latest_model << '\n';
    cout << "price: $" << price_usd << '\n';
    cout << "Made in: " << made_in << '\n';
  }
  void printParent() {
    cout << "- My parent company name is " << Apple::full_name << '\n';
    cout << '\n';
  }

private:
  string latest_model;
};

int main() {
  Apple apple;
  iPhone latest_iphone;
  iWatch latest_iwatch;
  Pixar pixar_animation_studios;

  cout << "\tInside Apple" << '\n';
  apple.print();

  cout << "\tInside iPhone" << '\n';
  latest_iphone.print();
  latest_iphone.printParent();

  cout << "\tInside iWatch" << '\n';
  latest_iwatch.print();
  latest_iwatch.printParent();

  cout << "\tInside Pixar" << '\n';
  pixar_animation_studios.print();
  pixar_animation_studios.printParent();

  return 0;
}
