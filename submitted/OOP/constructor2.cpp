#include <iostream>
using namespace std;

class Car {
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z) {
			brand = x;
			model = y;
			year = z;
		}
};

int main() {
	Car BMW("BMW", "X5", 1999);
	Car Ford("Ford", "Mustang", 1969);
	
	cout << BMW.brand << " " << BMW.model << " " << BMW.year << "\n";
	cout << Ford.brand << " " << Ford.model << " " << Ford.year << "\n";
	 
	return 0;
}