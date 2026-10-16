#include <iostream>
using namespace std;
struct TIME {
	int h;
	int m;
};
int main(void) {
	TIME timeStart = {-1, -1};
    TIME timeEnd ={-1, -1};

    //get start time
    while(timeStart.h < 0 || timeStart.h > 23) {
        cout << "Enter hour: ";
        cin >> timeStart.h;
        if(timeStart.h < 0 || timeStart.h > 23) {
            cout << "Invalid hour: " << timeStart.h << endl;
        }
    }
    while(timeStart.m < 0 || timeStart.m > 59) {
        cout << "Enter minute: ";
        cin >> timeStart.m;
        if(timeStart.m < 0 || timeStart.m > 59) {
            cout << "Invalid minute: " << timeStart.m << endl;
        }
    }

    //get end time
    while(timeEnd.h < 0 || timeEnd.h > 23) {
        cout << "Enter hour: ";
        cin >> timeEnd.h;
        if(timeEnd.h < 0 || timeEnd.h > 23) {
            cout << "Invalid hour: " << timeEnd.h << endl;
        }
    }
    while(timeEnd.m < 0 || timeEnd.m > 59) {
        cout << "Enter minute: ";
        cin >> timeEnd.m;
        if(timeEnd.m < 0 || timeEnd.m > 59) {
            cout << "Invalid minute: " << timeEnd.m << endl;
        }
    }

    //calculating duration in minutes
    int startMinutes = timeStart.h * 60 + timeStart.m;
    int endMinutes = timeEnd.h * 60 + timeEnd.m;
    int duration = endMinutes - startMinutes;

    //converting duration to hours and minutes
    int hours = duration / 60;
    int minutes = duration % 60;

    //printing the result
    cout << "Duration: " << hours << " hours and " << minutes << " minutes" << endl;

    return 0;
}