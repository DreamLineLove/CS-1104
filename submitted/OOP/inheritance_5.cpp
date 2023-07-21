#include <iostream>
using namespace std;

class Student {
	protected:
		string practical;
	public:
		string Practical() {
			return practical;
		}
};

class CS_Student: public Student {
	public:
		string Practical() {
			practical = "Programming";
			return practical;
		}
};

class IC_Student: public Student {
	public:
		string Practical() {
			practical = "Laboratory";
			return practical;
		}
};

int main() {
	CS_Student cs;
	IC_Student ic;
	
	cout << cs.Practical() << endl;
	cout << ic.Practical() << endl;
	
	return 0;
}