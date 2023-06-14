#include <iostream>
using namespace std;

int main() {
  cout << "\tD.H.M.S" << endl;
  cout << "\t-------\n" << endl;
  int days, hours, minutes, seconds, inputSeconds;
  int daySeconds = 86400;
  cout << "- How many seconds? ";
  cin >> inputSeconds;

  days = inputSeconds / daySeconds;
  hours = (inputSeconds % daySeconds) / 3600;
  minutes = ((inputSeconds % daySeconds) % 3600) / 60;
  seconds = ((inputSeconds % daySeconds) % 3600) % 60;
  cout << "- " << inputSeconds << " is:" << endl;
  cout << "\t" << days << " days" << endl;
  cout << "\t" << hours << " hours" << endl;
  cout << "\t" << minutes << " minutes" << endl;
  cout << "\t" << seconds << " seconds" << endl;

  return 0;
}
