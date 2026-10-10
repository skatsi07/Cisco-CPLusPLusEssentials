#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	
	// verfiying gross price
    if (grossprice <= 0)
    {
        std::cout << "Invalid gross price" << std::endl;
    }

    //verfiying tax rate
    if (taxrate <= 0 || taxrate >= 100)
    {
        std::cout << "Invalid tax rate" << std::endl;
    }

    //calculating net price
    netprice = grossprice / (1.0 + taxrate / 100.0);
    taxvalue = grossprice - netprice;

    cout << fixed << setprecision(4);
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}