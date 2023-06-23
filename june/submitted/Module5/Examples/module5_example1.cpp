#include <iostream>
using namespace std;

void myfunc();

int main() {
	cout << "In main()\n";
	myfunc();
	cout << "Back in main()\n";
	
	return 0;
}

void myfunc() {
	cout << "Inside myfunc()\n";
}