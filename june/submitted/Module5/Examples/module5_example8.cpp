#include <iostream>
using namespace std;

void f1();

int main() {
	int val = 10;
	
	cout << "val in main(): " << val << "\n";
	f1();
	cout << "val in main(): " << val << "\n";
	
	return 0;
}

void f1() {
	// This val is local to f1()
	int val = 88;
	
	cout << "val is f1(): " << val << endl;
}