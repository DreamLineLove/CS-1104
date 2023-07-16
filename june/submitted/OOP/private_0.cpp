#include <iostream>
using namespace std;

class Custom {
public:
  Custom() {
    cout << "Custom object constructed" << endl;
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
    cout << "constructed: true" << endl;

  return 0;
}
