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

int daysBetween(Date d1, Date d2) {

    //get day of year for both dates
    int day1 = dayOfYear(d1);
    int day2 = dayOfYear(d2);

    //calculate difference in days of year
    int diff = day2 - day1;

    //account for leap years
    if(isLeap(d1.year)) {
        diff += 1;
    }

    //return -1 if second date is earlier than first date
    if(diff < 0) {
        return -1;
    }
    
    return diff;

}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}