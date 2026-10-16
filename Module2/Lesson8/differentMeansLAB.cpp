#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;

	//arithmetic mean
    ArithmeticMean = 0;
    for (int i = 0; i<n; i++)
    {
        ArithmeticMean += vector[i];
    }
    ArithmeticMean /= n;

    //harmonic mean
    double harmonicSum = 0;
    for (int i = 0; i<n; i++)
    {
        harmonicSum += 1/vector[i];
    }
    HarmonicMean = n/harmonicSum;
    
    //geometric mean
    double geometricProduct = 1;
    for (int i = 0; i<n; i++)
    {
        geometricProduct *= vector[i];
    }
    GeometricMean = pow(geometricProduct, 1./n);

    //root mean square
    double rootMeanSquareSum = 0;
    for (int i = 0; i<n; i++)
    {
        rootMeanSquareSum += vector[i]*vector[i];
    }
    RootMeanSquare = sqrt(rootMeanSquareSum/n);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}