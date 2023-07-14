#include <iostream>
using namespace std;

class Car {
	public: 
		int year;
		string manufacturer;
};

int main() {
	Car toyota;
	toyota.year = 2004;
	toyota.manufacturer = "Toyota";
	
	cout << toyota.year << endl;
	cout << toyota.manufacturer << endl;
	
	return 0;
}