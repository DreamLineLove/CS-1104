#include <iostream>
using namespace std;

class Father {
	public:
		void printFather() {
			cout << "I have a father" << endl;
		}
};

class Mother {
	public:
		void printMother() {
			cout << "I have a mother" << endl;
		}
};

class Person: public Father, public Mother {
	public: 
		Person() {
			cout << "I am a person" << endl;
		}
};

int main() {
	Person zaw_zaw;
	zaw_zaw.printFather();
	zaw_zaw.printMother();
	
	return 0;
}