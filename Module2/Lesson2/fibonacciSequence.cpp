#include <iostream>
using namespace std;
int main(void) {

    // fiboncci sequence 

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int fib1 = 1;
    int fib2 = 1;
    int fib;

    for (int i = 2; i < n; i++){
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    cout << fib;

    return 0;

}