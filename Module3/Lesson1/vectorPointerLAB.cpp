#include <iostream>

using namespace std;

int main(void) {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

    //point to begin of vector
	int *p = vector;

    //initialise the minimum value with the first value of the vector
	int min = *p;
	// skip to next element
	p++;
	// iterate thru all elems
	for(int i = 1; i < n; i++) {
		// if current element if less than current min
		if(*p < min)
			// update min
			min = *p;
		// skip to next element
		p++;
	}
	cout << min << endl;
	return 0;
}