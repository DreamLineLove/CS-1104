#include <iostream>
using namespace std;

class Custom {
public:
  Custom() { cout << "Custom object constructed"; }

private:
  string strState;
  int intState;
};

int main() { return 0; }
