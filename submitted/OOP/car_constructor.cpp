#include <iostream>
using namespace std;

class Car {
	public: 
		int year;
		string brand;
		string model;
		Car(int yr, string name, string mod) {
			year = yr;
			brand = name;
			model = mod;
			
			cout << year << " " << brand << " " << model << endl;
		}
};

int main() {
	Car toyota(2020, "Toyota", "Land Cruiser");
	
	return 0;
}