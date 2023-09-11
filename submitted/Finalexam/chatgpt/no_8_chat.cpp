#include <iostream>
#include <string>

// Base class
class Animal {
public:
  Animal(const std::string &name) : name(name) {}

  // Encapsulation: Make the name member variable private
protected:
  std::string name;

public:
  // Polymorphism: Virtual function to print the name
  virtual void PrintName() const {
    std::cout << "Animal: " << name << std::endl;
  }
};

// Derived class 1
class Bird : virtual public Animal {
public:
  Bird(const std::string &name) : Animal(name) {}

  // Polymorphism: Override the PrintName function
  void PrintName() const override {
    std::cout << "Bird: " << name << std::endl;
    Animal::PrintName(); // Call the base class's PrintName function
  }
};

// Derived class 2
class Mammal : virtual public Animal {
public:
  Mammal(const std::string &name) : Animal(name) {}

  // Polymorphism: Override the PrintName function
  void PrintName() const override {
    std::cout << "Mammal: " << name << std::endl;
    Animal::PrintName(); // Call the base class's PrintName function
  }
};

// Multiple Inheritance: Derived class combining features of Bird and Mammal
class Bat : public Bird, public Mammal {
public:
  Bat(const std::string &name) : Animal(name), Bird(name), Mammal(name) {}

  // Polymorphism: Override the PrintName function
  void PrintName() const override {
    std::cout << "Bat: " << name << std::endl;
    Animal::PrintName(); // Call the base class's PrintName function
  }
};

int main() {
  // Create objects of different classes
  Bird sparrow("Sparrow");
  Mammal dog("Dog");
  Bat bat("Bat");

  // Call the PrintName function for each object
  sparrow.PrintName();
  dog.PrintName();
  bat.PrintName();

  return 0;
}
