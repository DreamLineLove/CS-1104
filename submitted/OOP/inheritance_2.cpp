#include <iostream>
using namespace std;

class Alphabet {
	public: 
		string description = "Alphabet is the world's largest software holding company.";
		void greet() {
			cout << description << endl;
		}
};

class Google: public Alphabet {
	public:
		string greeting = "My name is Google. I am a subsidiary owned by Alphabet.";
		void greet() {
			cout << greeting << endl;
		}
};

class Gmail: public Alphabet {
	public: 
		string what = "Hi I am Gmail! People use me to write emails every day.";
		void describe() {
			cout << what << endl;
		}
};

int main() {
	Alphabet alpha;
	Google googl;
	Gmail gmail;
	
	cout << googl.description << endl;
	googl.greet();
	gmail.describe();
	
	return 0;
}