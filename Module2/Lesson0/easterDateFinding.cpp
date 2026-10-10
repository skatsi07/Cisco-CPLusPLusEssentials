#include <iostream>

using namespace std;

int main(void) {

    int year, a, b, c, d, e, easterday;

    cout << "Enter a year: ";
    cin >> year;

    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (a * 19 + 24) % 30;
    e = (2*b + 4*c + 6*d + 5) % 7;

    if ((d+e < 10))
    {
        easterday = 22 + d + e;
        cout << "Easter is on the " << easterday << "th of March\n";
    }
    else
    {
        easterday = d + e - 9;
        cout << "Easter is on the " << easterday << "th of April\n";
    }

}