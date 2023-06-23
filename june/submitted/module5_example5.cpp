#include <iostream>
using namespace std;

int box(int length, int width, int height);

int main() {
	int answer;
	
	answer = box(10, 11, 3);
	cout << "The volume is " << answer;
	
	return 0;
}

int box(int length, int width, int height) {
	return length * width * height;
}