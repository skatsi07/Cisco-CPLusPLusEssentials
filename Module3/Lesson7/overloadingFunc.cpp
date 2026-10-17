#include <iostream>
#include <cmath>
using namespace std;

// Insert your functions here
void increment(int &x, int inc = 1) {
    x += inc;
}
void increment(float &x, double inc = 1.0) {
    x += inc;
}

int main(void) {

	int intvar = 0;
	float floatvar = 1.5;

	for(int i = 0; i < 10; i++)
		if(i % 2) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar,i);
			increment(floatvar);
		}
	cout << intvar * floatvar << endl;
	return 0;
}