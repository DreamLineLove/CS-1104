#include <iostream>
using namespace std;

class MyClass {
	public:
		void myMethod(int count);
};

void MyClass::myMethod(int count) {
	for (int i = 0; i < count; i++) {
		cout << "Hello World!" << endl;
	}
}

int main() {
	MyClass myObj;
	myObj.myMethod(3);
	
	return 0;
}