#include <iostream>

using namespace std;

int main(void) {

    int dimension;

    cout << "Enter the dimension: ";
    cin >> dimension;

    if (dimension <= 0 || dimension >= 100)
    {
        cout << "Invalid dimension";
        return 1;
    }
    
	cout << '+';
	for(int i = 0; i < dimension; i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < dimension; i++) {
		cout << '|';
		for(int j = 0; j < dimension; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < dimension; i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}