#include <iostream>
using namespace std;

const double PI = 3.14;

double area(double x, double y) { return x * y; }

double area(double r) { return PI * r * r; }

void say(string str = "Lorem Ipsm") { cout << str << endl; }

int main() {
  cout << "Area of the rectangle is: " << area(5.7, 5.0) << endl;
  cout << "Area of the cirlce is: " << area(6) << endl;

  say();
  say("I am saying something!");

  return 0;
}
