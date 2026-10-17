#include <iostream>

using namespace std;

bool isLeap(int year) { 
	if (year % 4 != 0) 
		return false;
	else if (year % 100 != 0)
		return true;
	else if (year % 400 != 0) 
		return false;
	else 
		return true;
}

int monthLength(int year, int month) {
    switch(month) {
        //Feb
        case 2:
            return isLeap(year) ? 29 : 28;
        //April, June, Sep, November
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        // Jan, March, May, July, Aug, Oct, Dec
        default:
            return 31;
    }
}

int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}