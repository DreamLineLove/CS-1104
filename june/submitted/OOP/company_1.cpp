#include <iostream>
using namespace std;

class Company {
	public: 
		string company_name;
		string address;
		int telephone_number;
		void make_transactions() {
			cout << "\n Transaction completed!";
		};
};

int main() {
	Company ZnzLtd;
	ZnzLtd.company_name = "Zwe Nyan Zaw";
	ZnzLtd.address = "Kyun Taw Road, Time City Office, Tower A";
	ZnzLtd.telephone_number = 94447065;
	
	cout << "\tCompany Details" << endl << endl;
	cout << " Name of company: \t" << ZnzLtd.company_name << " company limited" << endl;
	cout << " Address: \t\t" << ZnzLtd.address << "." << endl;
	cout << " Telephone number: \t0" << ZnzLtd.telephone_number << endl;
	ZnzLtd.make_transactions();
	
	return 0;
}