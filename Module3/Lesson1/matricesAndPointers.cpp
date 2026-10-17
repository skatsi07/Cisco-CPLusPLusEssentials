#include <iostream>

using namespace std;

int main(void) {

	int matrix[10][10] = { };

    //construct multiplication table using matrix with pointers
	int *p1;
	
    p1 = &matrix[0][0];

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            int *p2 = (p1 + j *10) + i;
            *p2 = (i+1) * (j+1);
        }
    }

    //loop through matrix and print
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}