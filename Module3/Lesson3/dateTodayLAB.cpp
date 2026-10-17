#include <iostream>
#include <ctime>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {

	time_t time_today = time(0);
    tm *tm_today = localtime(&time_today);
    Date d;
    //add 1900 to get curr year
    d.year = tm_today->tm_year + 1900;
    //add one to get usable value
    d.month = tm_today->tm_mon + 1;
    d.day = tm_today->tm_mday;
    return d;

}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}