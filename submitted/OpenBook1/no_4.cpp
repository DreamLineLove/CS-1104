#include <iostream>
using namespace std;

int dollar(int kyat);
int yuan(int kyat);
int yen(int kyat);

const int dollarRate = 3500;
const int yuanRate = 500;
const int yenRate = 20;

int main() { return 0; }

int dollar(int kyat) { return kyat * dollarRate; }
