#include <iostream>
using namespace std;

class Custom {
public:
  Custom() {
    cout << "Custom object constructed";
    constructed = true;
  }
  bool constructed = false;

private:
  string strState;
  int intState;
};

int main() {
  Custom mein;
  if (mein.constructed == 1)
    cout << "constructed: true";

  return 0;
}
