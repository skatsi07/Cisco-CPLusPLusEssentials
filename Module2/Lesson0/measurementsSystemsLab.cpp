#include <iostream>

using namespace std;

int main(void) {
	int   sys;
	float m, ft, in;
    int ift;

	//getting input 
	cout << "Enter the system 0 for metric, 1 for imperial: ";
	cin >> sys;
	
    if (sys == 0)
    {
        cout << "Enter value in meters: ";
        cin >> m;
        
        // get in inches and print
		in = m / 0.0254;
		ift = in / 12;
		in = in - (ift * 12);
		cout << ift << "'" << in << "\"" << endl;
    
    }
    else if (sys == 1)
    {
        cout << "Enter value in feet: ";
        cin >> ft;
        
        // cumulate inches and feet as inches and convert to m
		in += 12 * ft;
		m = in * 0.0254;

		cout << m << "m" << endl;
        
    }
    else 
    {
        cout << "Invalid system";
    }

	return 0;
}