#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

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

int dayOfYear(Date date) {
    int dayCount = 0;
    // loop from first month to the month before the given date's month
    for(int month = 1; month < date.month; month++) {
        //add length of month to day count (up to month before designated month)
        dayCount += monthLength(date.year, month);
    }
    //add date in curr month to day count
    dayCount += date.day;
    return dayCount;
}

int main(void) {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}