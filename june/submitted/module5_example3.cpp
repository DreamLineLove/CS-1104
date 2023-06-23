#include <iostream>
using namespace std;

void f();

int main() {
	cout << "Before call\n";
	f();
	cout << "After call\n";
	
	return 0;
}

void f() {
	cout << "Inside f()\n";
	return;
	cout << "This won't display!";
}