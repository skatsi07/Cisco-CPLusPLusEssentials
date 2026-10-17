#include <iostream>

using namespace std;

// Insert your function here
void increment(int &x) {
	x += 1;
}

void increment(int &x, int y) {
	x += y;
}

int main(void) {
	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2)
			increment(var);
		else
			increment(var,i);
	cout << var << endl;
	return 0;
}