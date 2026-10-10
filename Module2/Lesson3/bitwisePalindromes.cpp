#include <iostream>

using namespace std;

int main(void) {

	unsigned short int val;
	bool ispalindrome = false;

	cout << "value = ";
	cin >> val;

	unsigned short int newval = 0;

	unsigned short int temp = val;
	for (int i = 0; i < 16; i++){
		int bit = val & (1 << i);

		if (bit){
			newval |= (1<<(15-i));
		}

	}

	ispalindrome = newval == val;

	if(ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;	
	return 0;
}