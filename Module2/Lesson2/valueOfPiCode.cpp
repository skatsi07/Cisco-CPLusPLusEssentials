#include <iostream>

using namespace std;

int main(void) {
	double pi4 = 0.;
	long   n;
    double div = 1;

	cout << "Number of iterations? ";
	cin >> n;

    for (int i = 0; i < n; i++)
    {
        if(i%2 == 1){
            pi4 -= (1.0/div);
        }
        else
        {
            pi4 += (1.0/div);
        }

        div += 2;
    }

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}