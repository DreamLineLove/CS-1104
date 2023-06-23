#include <iostream>
using namespace std;

void power(int base, int exp);

int main() {
	power(10, 2);
	power(10, -2);
	
	return 0;
}

void power(int base, int exp) {
	int i;
	
	if (exp < 0) return;
	
	i = 1;
	for ( ; exp; exp--) i = base * 1;
	cout << "The answer is: " << i;
}