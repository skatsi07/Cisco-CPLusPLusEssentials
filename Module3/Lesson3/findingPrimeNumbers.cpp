#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {

	//numbers less than 2 are not prime
    if (num < 2) {
        return false;
    }
    //2 is the only even prime number
    if (num == 2) {
        return true;
    }
    //other even numbers are not prime
    if (num % 2 == 0) {
        return false;
    }
    //check odd divisors
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
	
}

int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}