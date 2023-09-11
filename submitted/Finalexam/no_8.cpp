#include <iostream>
using namespace std;

class Apple {
public:
  Apple() : full_name("Apple Inc."){};

  virtual void Print() const {
    cout << full_name << " is the most valuable company in the world." << '\n';
  }

protected:
  string full_name;
};

class AppleProduct {
public:
  AppleProduct(const int price) : made_in("China"), price_usd(price){};

protected:
  string made_in;
  int price_usd;
};

class Pixar : public Apple {
public:
  Pixar() : full_name("Pixar Animation Studios"){};

  void Print() const override {
    cout << "Name of company: " << full_name << '\n';
  }
  void PrintParent() {
    cout << "Inside Pixar" << '\n';
    Apple::Print();
    cout << '\n';
  }

private:
  string full_name;
};

class iPhone : public Apple, public AppleProduct {
public:
  iPhone() : latest_model("iPhone 15"), AppleProduct(799){};

  void Print() const override {
    cout << "Latest iPhone model: " << latest_model << '\n';
    cout << "price: $" << price_usd << '\n';
    cout << "Made in: " << made_in << '\n';
    cout << '\n';
  }
  void PrintParent() {
    cout << "Inside iPhone" << '\n';
    Apple::Print();
    cout << '\n';
  }

private:
  string latest_model;
};

class iWatch : public Apple, public AppleProduct {
public:
  iWatch() : latest_model("Apple Watch Series 9"), AppleProduct(399){};

  void Print() const override {
    cout << "Latest iWatch model: " << latest_model << '\n';
    cout << "price: $" << price_usd << '\n';
    cout << "Made in: " << made_in << '\n';
    cout << '\n';
  }
  void PrintParent() {
    cout << "Inside iWatch" << '\n';
    Apple::Print();
    cout << '\n';
  }

private:
  string latest_model;
};

int main() {
  iPhone latest_iphone;
  iWatch latest_iwatch;
  Pixar pixar_animation_studios;

  latest_iphone.Print();
  latest_iwatch.Print();
  pixar_animation_studios.Print();

  cout << "\n";
  latest_iphone.PrintParent();
  latest_iwatch.PrintParent();
  pixar_animation_studios.PrintParent();

  return 0;
}
