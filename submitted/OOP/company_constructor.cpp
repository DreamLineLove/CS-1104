#include <iostream>
using namespace std;

class Company {
	public: 
		string company_name;
		string address;
		int telephone_number;
		Company(string name, string addr, int num) {
			company_name = name;
			address = addr;
			telephone_number = num;
			
			cout << "\tCompany Details" << "\n" << "\n";
			cout << " Name of company: \t" << company_name << " company limited" << "\n";
			cout << " Address: \t\t" << address << "." << "\n";
			cout << " Telephone number: \t0" << telephone_number << "\n";
		}
		void make_transactions() {
			cout << "\n Transaction completed!";
		};
};

int main() {
	Company ZnzLtd("Zwe Nyan Zaw", "Kyun Taw Road, Time City Office, Tower A", 94447065);
	ZnzLtd.make_transactions();
	
	return 0;
}