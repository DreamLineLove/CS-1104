#include <iostream>
using namespace std;

class Father {
	public:
		void printFather() {
			cout << "I have a father" << "\n";
		}
};

class Mother {
	public:
		void printMother() {
			cout << "I have a mother" << "\n";
		}
};

class Person: public Father, public Mother {
	public: 
		Person() {
			cout << "I am a person" << "\n";
		}
};

int main() {
	Person zaw_zaw;
	zaw_zaw.printFather();
	zaw_zaw.printMother();
	
	return 0;
}