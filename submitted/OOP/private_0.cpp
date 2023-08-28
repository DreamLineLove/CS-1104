#include <iostream>
using namespace std;

class Custom {
public:
  Custom() {
    cout << "Custom object constructed" << "\n";
    constructed = true;
  }
  bool constructed = false;
  void setStr(string str) { strState = str; }
  string getStr() { return strState; }
  void setInt(int integer) { intState = integer; }
  int getInt() { return intState; }

private:
  string strState;
  int intState;
};

int main() {
  Custom mein;
  if (mein.constructed == 1)
    cout << "constructed: true" << "\n";
  cout << "\n(original) strState: " << mein.getStr() << "\n";
  // Expected 0 instead
  cout << "(original) intState: " << mein.getInt() << "\n";

  mein.setStr("Now it is something");
  cout << "\n(modified) strState: " << mein.getStr() << "\n";
  mein.setInt(999);
  cout << "(modified) intState: " << mein.getInt() << "\n";

  return 0;
}
