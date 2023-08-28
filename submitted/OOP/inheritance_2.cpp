#include <iostream>
using namespace std;

class Alphabet {
	public: 
		string description = "Alphabet is the world's largest software holding company.";
		void greet() {
			cout << description << "\n";
		}
};

class Google: public Alphabet {
	public:
		string greeting = "My name is Google. I am a subsidiary owned by Alphabet.";
		void greet() {
			cout << greeting << "\n";
		}
};

class Gmail: public Alphabet {
	public: 
		string what = "Hi I am Gmail! People use me to write emails every day.";
		void describe() {
			cout << what << "\n";
		}
};

int main() {
	Alphabet alpha;
	Google googl;
	Gmail gmail;
	
	cout << googl.description << "\n";
	googl.greet();
	gmail.describe();
	
	return 0;
}