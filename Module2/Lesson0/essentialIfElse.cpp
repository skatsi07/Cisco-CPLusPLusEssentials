#include <iostream>
using namespace std;

int main(void) {
	int year;
	
	cout << "Enter a year: ";
	cin >> year;
	
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        std::cout << "Leap year" << std::endl;
    else
        std::cout << "Common year" << std::endl;
	
	return 0;
}