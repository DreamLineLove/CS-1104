#include <iostream>
using namespace std;

class Employee {
	protected:
		int salary;
};

class Programmer: public Employee {
	public:
		int bonus;
		void setSalary(int s) {
			salary = s;
		}
		int Salary() {
			return salary;
		}
		int Total() {
			return salary + bonus;
		}
};

int main() {
	Programmer zaw_zaw;
	zaw_zaw.setSalary(75000);
	zaw_zaw.bonus = 25000;
	cout << "Salary: " << zaw_zaw.Salary() << "\n";
	cout << "Bonus: " << zaw_zaw.bonus << "\n";
	cout << "Salary: " << zaw_zaw.Total() << "\n";
	return 0;
}