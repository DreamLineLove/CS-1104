#include <iostream>
using namespace std;

class Employee {
	private: 
		int salary;
		
	public:
		void setSalary(int s) {
			salary = s;
		}
		
		int getSalary() {
			return salary;
		}
};

int main() {
	Employee Znz;
	Znz.setSalary(445000);
	cout << "Salary: $" << Znz.getSalary() << endl;
	
	return 0;
}