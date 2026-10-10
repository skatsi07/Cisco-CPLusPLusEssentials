#include <iostream>

using namespace std;

int main(void) {

    int day, month, year, rem;

    cout << "Enter a day: ";
    cin >> day;

    //check day input
    if (day < 0 || day > 31)
    {
        cout << "Invalid day";
    }

    cout << "Enter a month: ";
    cin >> month;

    //check month input
    if (month < 0 || month > 12)
    {
        cout << "Invalid month";
    }
    
    cout << "Enter a year: ";
    cin >> year;

    //check year input
    if (year < 0)
    {
        cout << "Invalid year";
    }

    month -= 2;
    if (month < 0)
    {
        month += 12;
        year -= 1;
    }

    month = month * 83 / 32;
    month += day;
    month += year;
    month += year/4;
    month -= year/100;
    month += year/400;
    rem = month % 7;

    if (rem == 0)
    {
        cout << "Sunday";
    }
    else if (rem == 1)
    {
        cout << "Monday";
    }
    else if (rem == 2)
    {
        cout << "Tuesday";
    }
    else if (rem == 3)
    {
        cout << "Wednesday";
    }
    else if (rem == 4)
    {
        cout << "Thursday";
    }
    else if (rem == 5)
    {
        cout << "Friday";
    }
    else if (rem == 6)
    {
        cout << "Saturday";
    }
    

}